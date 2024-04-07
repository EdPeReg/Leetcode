
"""
Leetcode problem: https://leetcode.com/problems/merge-strings-alternately/description/?envType=study-plan-v2&envId=leetcode-75
"""

from itertools import zip_longest

def mergeAlternately(word1: str, word2: str) -> str:
    """
    Using two pointer approach, original solution.
    
    Complexity is 0(n+m) where n is the word1 length and m is word2 length.
    """

    w1_len, w2_len = len(word1), len(word2)
    merge_str = ""
    i, j = 0, 0

    # Iterate over the words until both words
    while i < w1_len or j < w2_len:
        # Only add the char when the pointer is valid
        if i < w1_len:
            merge_str += word1[i]
            i += 1
        if j < w2_len:
            merge_str += word2[j]
            j += 1

    return merge_str

def mergeAlternatelyOnePointer(word1: str, word2: str) -> str:
    """
    One pointer approach.

    Complexity is O(n+m) where n is word1 length and m is the word2 length
    """

    max_length = max(len(word1), len(word2))
    merge_str = ""

    for i in range(max_length):
        if i < len(word1):
            merge_str += word1[i]
        if i < len(word2):
            merge_str += word2[i]
            
    return merge_str

def mergeAlternatelyWeird(word1: str, word2: str) -> str:
    """
    Another solution from here https://leetcode.com/problems/merge-strings-alternately/editorial/comments/1867095
    """
    return ''.join(c for pair in zip_longest(word1, word2, fillvalue='') for c in pair)
