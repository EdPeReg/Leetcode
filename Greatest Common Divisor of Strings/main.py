
"""
- Leetcode problem: https://leetcode.com/problems/greatest-common-divisor-of-strings/?envType=study-plan-v2&envId=leetcode-75
- Method 2 to apply GCD: https://www.dcode.fr/gcd
- Leetcode solution: https://leetcode.com/problems/greatest-common-divisor-of-strings/solutions/3124997/super-easy-solution-fully-explained-c-python3-java/
"""

import math

def gcdOfStrings(str1: str, str2: str) -> str:
    """Time complexity is O(n) of this function"""
    len_str1, len_str2 = len(str1), len(str2)
    gcd = math.gcd(len_str1, len_str2)
    gcd_str = ""

    # Let's pretend our string is this substring
    gcd_str = str1[:gcd]

    i, k, j = 0, 0, 0
    while i < max(len(str1), len(str2)):
        if k == len(gcd_str):
            k = 0
        # Check not going out of bounds and if there are any different letters
        # between the strings str1 and str2 with gcd_str
        if (i < len(str1) and str1[i] != gcd_str[k]) or (j < len(str2) and str2[j] != gcd_str[k]):
            return ""
        i += 1
        k += 1
        j += 1

    return gcd_str

def gcdOfStringsLeetcode(str1: str, str2: str) -> str:
    if str1 + str2 == str2 + str1:
        return str1[:math.gcd(len(str1), len(str2))]
    return ""