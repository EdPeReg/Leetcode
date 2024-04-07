
def mergeAlternately(word1: str, word2: str) -> str:
    max_length = len(word1) if len(word1) > len(word2) else len(word2)
    j = 0
    merge_str = ""

    for i in range(max_length):
        if i < len(word1):
            merge_str += word1[i]
        if j < len(word2):
            merge_str += word2[j]
        j += 1
    
    return merge_str