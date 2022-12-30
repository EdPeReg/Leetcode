#!/usr/bin/env python3

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
