#!/usr/bin/env python3

import re

def isPalindrome(s: str) -> bool:
    s = re.sub(r"[^A-Za-z0-9]", "", s).lower()
    for i in range(len(s) // 2):
        if s[i] != s[len(s) - 1 - i]:
            return False
    return True

def isPalindome2(s: str) -> bool:
    s = re.sub(r"[^A-Za-z0-9]", "", s)
    return s == s[::-1]
