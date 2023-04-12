#!/usr/bin/env pyhton3

def firstUniqChar(s: str) -> int:
    d = {}

    for char in s:
        if char in d:
            d[char] += 1
        else:
            d[char] = 1
    
    for i in range(len(s)):
        if d[s[i]] == 1:
            return i

    return -1
