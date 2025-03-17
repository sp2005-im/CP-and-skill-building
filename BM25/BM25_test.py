from BM25 import BM25

documents = [
        ['machine', 'learning', 'is', 'fascinating'],
        ['deep', 'learning', 'revolutionizes', 'ai'],
        ['natural', 'language', 'processing', 'uses', 'machine', 'learning'],
        ['computer', 'vision', 'applies', 'machine', 'learning', 'techniques']
]

# Initialize BM25
bm25 = BM25(documents)

# Example query
query = ['machine', 'learning']

# Rank documents
ranked_docs = bm25.rank_documents(query)

# Print ranked results
print("Ranked Documents:")
for result in ranked_docs:
    print(f"Score: {result['score']:.4f}, Document: {result['document']}")
