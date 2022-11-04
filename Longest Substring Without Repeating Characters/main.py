#!/bin/env python3

"""
The idea is to have two pointers, left and right, where right pointer
moves forwards and left pointer moves forward only when there are repeated characters.

Here we don't use explicitly a left and right pointer (denoted as l = 0), the right pointer
will be our char, because is moving forward in each iteration, the left pointer will be the most
left value in our deque, we move our left pointer forward each time we remove the most left element.
"""

from collections import deque

def lengthOfLongestSubstring(s: str) -> int:
    visited = deque()
    max = 0

    for char in s:
        # Remove our the left pointer (left value) until we don't find any more repeated characters
        while char in visited:
            visited.popleft()
        visited.append(char)

        # If the current size is greater than what it is right know.
        # this can be set as max = max(visited, r - l + 1)
        if len(visited) > max:
            max = len(visited)
    return max

string = input("")
print(lengthOfLongestSubstring(string))
