#Sri Rama Jayam
import re
import os
from collections import defaultdict

class RegexSearchEngine:
  def __init__(self):
    self.documents = {}
    self.index = defaultdict(list)
  
  def add_document(self, doc_id, content):
    '''
    Add document to the search engine. 
    doc_id : A unique identifier for a document
    content: document content
    '''
    #Simple index of words to documents
    self.documents[doc_id] = content 
    words = set(re.findall(r'\w+', content.lower()))
    for word in words:
      self.index[word].append(doc_id)
    
  def add_documents_from_directory(self, directory_path, file_extension = '.txt'):
    '''
    Load all documents from a directory 
    Arguments: directory_path : specify the path of the directory
    file_extension: .txt (extension of the file here taken as .txt, meaning text file)
    '''
    for filename in os.listdir(directory_path):
      if filename.endswith(file_extension):
        file_path = os.path.join(directory_path, filename)
        with open (file_path, 'r', encoding = 'utf-8') as file:
          content = file.read()
          self.add_document(filename, content)
  
  def search(self, query, use_index = True):
    '''
    Search Documents using regex pattern. 
    Args:
    query: Regular Expression or keyword query
    use_index: Whether to use the index for pre-filtering
    '''
    results = []
    try:
      pattern = re.compile(query, re.IGNORECASE)
      docs_to_search = self.documents
      if use_index and not self._is_complex_regex(query):
        candidate_docs = self._get_candidate_docs(query.lower())
        docs_to_search = {doc_id: self.documents[doc_id] for doc_id in candidate_docs}
      for doc_id, content in docs_to_search.items():
        matches = pattern.findall(content)
        if matches:
          results.append((doc_id, matches))
      return results 
    
    except re.error:
      return self.literal_search(query)
