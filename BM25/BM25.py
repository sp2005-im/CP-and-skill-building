import math
from typing import List, Dict
from collections import Counter

class BM25:
  def __init__(self, documents: List[List[str]], k1 : float = 1.5, b: float = 0.75):
    '''
    Initialize BM25 with a collection of documents
    :param documents: List of tokenized documents
    :param k1: Tuning parameter for term frequency scaling
    :param b: Tuning parameter for document length normalization
    '''
    self.documents = documents
    self.k1 = k1
    self.b = b

    self.doc_count = len(documents)
    self.avg_doc_length = sum(len(doc) for doc in documents)/self.doc_count
    self.compute_document_frequencies()

  def compute_document_frequencies(self):
    # Function to compute document frequencies and inverse document frequencies
    self.term_doc_frequency = {}
    for doc in self.documents:
      unique_terms = set(doc)
      for term in unique_terms:
        if term not in self.term_doc_frequency:
          self.term_doc_frequency[term] = 0 # To inialize the keys to zero and then increment
        self.term_doc_frequency[term]+=1
    self.idf = {}
    for term, doc_freq in self.term_doc_frequency.items():
      self.idf[term] = math.log(
          1 + (self.doc_count - doc_freq + 0.5)/(doc_freq+0.5)
      )

  def calculate_score(self, query: List[str], doc_index: int) -> float:
    doc = self.documents[doc_index]
    doc_length = len(doc)

    score = 0
    term_frequencies = Counter(doc)

    for term in query:
      if term not in self.idf:
        continue

      tf = term_frequencies[term]
      tf_component = (tf*(self.k1+1)/(tf + self.k1 * (1 - self.b + self.b * doc_length / self.avg_doc_length)))
      score+=self.idf.get(term,0)*tf_component
    return score

  def rank_documents(self, query: List[str]) -> List[Dict[str, float]]:

    scores = [

        {
            'index': i,
            'score': self.calculate_score(query, i),
            'document': self.documents[i]
        }
        for i in range(self.doc_count)
        ]

        # Sort documents by score in descending order
    return sorted(scores, key=lambda x: x['score'], reverse=True)
