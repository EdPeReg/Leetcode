#!/usr/bin/env python3

"""
I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.

This restriction applies if you only check if the current roman number is
less than its next number, if you see carefully I is always less than V or X
X is always less than L or C and C is always less than D or M

Because of this, is not necessary to check expliclity if the next number is either
'V', 'X', 'L', 'C', 'D' or 'M'

Like this:
    if s[i] == "C" and (s[i+1] == "D" or s[i+1] == "M"):

When we iterate in our string, the last roman number is not analized because we don't
want an overflow, so we only add the last roman number normally
"""

import sys

def romanToInt(s: str) -> int:
    romans_num = {"I": 1, "V": 5, "X": 10, "L": 50, "C": 100, "D": 500, "M": 1000}
    num = 0

    # -1 because we are analyzing the next char with +1 
    for i in range(len(s) - 1):
        # If the roman number is less than its next number, just substract
        if romans_num[s[i]] < romans_num[s[i+1]]:
            num -= romans_num[s[i]]
        else:
            num += romans_num[s[i]]

    # Add the last roman number
    return num + romans_num[s[-1]]

def get_string(): return sys.stdin.readline().strip()

if __name__ == '__main__':
    n = int(get_string())
    while n > 0:
     n -= 1
     string = get_string()
     print(string)
     print(romanToInt(string))
