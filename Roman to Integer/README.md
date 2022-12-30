# Logic

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

# Complexity
Complexity is O(n) because we need to traverse the entire string
Space is O(1) because there is no N element to add to our map

# References

- [Problem](https://leetcode.com/problems/roman-to-integer/description/)
- [Clean python solution](https://leetcode.com/problems/roman-to-integer/solutions/264743/clean-python-beats-99-78/) , check frugurt comment
- [Roman to Integer - Leetcode 13 - Python](https://www.youtube.com/watch?v=3jdxYj3DD98)
