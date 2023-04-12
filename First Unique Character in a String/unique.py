#!/usr/bin/env pyhton3

from collections import Counter

def firstUniqChar(s: str) -> int:
    d = {}

    for char in s:
        d[char] = d.get(char, 0) + 1
    
    for i in range(len(s)):
        if d[s[i]] == 1:
            return i

    return -1

# FROM CHATGPT
def firstUniqCharChatGPT(s: str) -> int:
    d = Counter(s)

    for i, char in enumerate(s):
        if d[char] == 1:
            return i
    return -1