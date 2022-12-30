#!/usr/bin/env python3

import sys

def romanToInt(s: str) -> int:
    romans_num = {"I": 1, "V": 5, "X": 10, "L": 50, "C": 100, "D": 500, "M": 1000}
    num = 0

    i = 0
    while i < len(s) - 1: 
        if s[i] == "C" and (s[i+1] == "D" or s[i+1] == "M"):
            num += (romans_num[s[i+1]] - romans_num[s[i]])
            i += 2
        elif s[i] == "I" and (s[i+1] == "V" or s[i+1] == "X"):
            num += (romans_num[s[i+1]] - romans_num[s[i]])
            i += 2
        elif s[i] == "X" and (s[i+1] == "L" or s[i+1] == "C"):
            num += (romans_num[s[i+1]] - romans_num[s[i]])
            i += 2
        else:
            num += romans_num[s[i]]
            i += 1

    if i == len(s) - 1:
        num += (romans_num[s[i]])

    return num

def get_string(): return sys.stdin.readline().strip()

if __name__ == '__main__':
    n = int(get_string())
    while n > 0:
     n -= 1
     string = get_string()
     print(string)
     print(romanToInt(string))
