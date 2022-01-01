#!/bin/env/python3

from collections import deque

def lengthOfLongestSubstring(s: str) -> int:
    visited = deque()
    max = 0

    for char in s:
        while char in visited:
            visited.popleft()
        visited.append(char)

        if len(visited) > max:
            max = len(visited)
    return max

string = input("")
print(lengthOfLongestSubstring(string))
