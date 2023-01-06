
"""
You need to iterate for each letter in the first string in our list and 
check if that letter is found in the other strings, if not, then just return
any prefix found

In the condition

if index >= len(string) or char != string[index]:

We are checking that we aren't out bounds, that part is triggered with an example like this:

['ab', 'a']

Where the first string is bigger than the second string

After checking the other strings, if everything was ok, then we add the current char as prefix.

The time complexity is O(N*M) where N is the maximum amount of elements in the list, and M 
is the maximum amount of characters read
"""

import sys

def longestCommonPrefix(strs: list[str]) -> str:
    prefix = ""

    # If an empty list is given
    if not strs:
        return prefix

    index = 0
    # Iterate through all characters in our first string
    for char in strs[0]:
        # Iterate in each string in our list, starting out from the next string
        for string in strs[1:]:
            # Check that is not out of bounds or the lette is different
            if index >= len(string) or char != string[index]:
                return prefix

        # At this point the letter is in the other strings
        prefix += char
        index += 1

def get_string(): return sys.stdin.readline().strip()

if __name__ == '__main__':
    n = int(get_string())

    while n:
        strs = get_string().split(",")
        print(strs)
        print(longestCommonPrefix(strs))
        n -= 1