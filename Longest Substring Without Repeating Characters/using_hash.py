#!/bin/env python3

"""
We still use the slide window technique, but here we don't increment the left pointer
little by little, we just jump to the corresponding index where the char is not repeated anymore.
"""

def lengthOfLongestSubstring(s: str) -> int:
    buffer = {}
    max_len = 0 # This is our slide window.
    left = 0    # Left pointer.

    for i, char in enumerate(s):
        # We find a repetade char, jump to the corresponding
        # index where we don't find a repeated char,
        # moving the left pointer.
        if char in buffer:
            # Jump directly to its corresponding index.
            left = max(buffer[char], left)

        # Current window size is greater than what it is now.
        max_len = max(max_len, i - left + 1)

        # By updating the value of this way, we can use this
        # when a char is repeated.
        buffer[char] = i + i

    return max_len

string = input('')
print(lengthOfLongestSubstring(string))
