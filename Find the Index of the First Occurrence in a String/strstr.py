#!/usr/bin/env python3

def strStrEasy(haystack: str, needle: str) -> int:
    return haystack.find(needle)

def strStr(haystack: str, needle: str) -> int:
    for i in range(len(haystack)):
        if haystack[i] == needle[0]:
            # i + len(needle) is start from the i position
            substr = haystack[i : i + len(needle)]
            if substr == needle:
                return i
    
    return -1
