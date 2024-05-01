
"""
- Leetcode problem: https://leetcode.com/problems/greatest-common-divisor-of-strings/?envType=study-plan-v2&envId=leetcode-75
- Method 2 to apply GCD: https://www.dcode.fr/gcd
"""

def gcdOfStrings(str1: str, str2: str) -> str:
    """Time complexity is O(n) of this function"""
    a = len(max(str1, str2))
    b = len(min(str1, str2))
    gcd = b
    gcd_str = ""

    # Applyting Euclidean algorithm to get the len of the string
    # O(log n)
    while (r := a % b):
        a = b
        b = r
        if 0 != r:
            # Our string should have this len
            gcd = r

    # O(n)
    for i in range(gcd):
        if str1[i] == str2[i]:
            gcd_str += str1[i]

    if gcd_str == "":
        return ""

    k = 0
    # O(n)
    for i in range(len(str1)):
        if k == len(gcd_str):
            k = 0
        if gcd_str[k] != str1[i]:
            return ""
        k += 1

    k = 0
    # O(n)
    for i in range(len(str2)):
        if k == len(gcd_str):
            k = 0
        if gcd_str[k] != str2[i]:
            return ""
        k += 1
    
    return gcd_str
