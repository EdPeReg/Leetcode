# How to Run

Run **test.py** this contains the test cases for the algorithm, the **palindrome.py** is the main algorithm </br>

# Explanation

Our first mission is to rid off non alphanumeric characters and convert them in lowercase, fortunately for us python as already some fundtions that does that for me, in this version _regex_ is used. <br>

This means that it matches any character that is not an upper/lower case letter and number. <br>

```
[^A-Za-z0-9]
```

After that, the idea is to use two pointers, a _left_ pointer and a _right_ pointer, but in this case, a _right_ pointer is not necessary, we can get the corresponding _right_ index by using `len(s) - 1 - i`. <br>

# Time/Space complexity

- **function isAnagram**: Time complexity is by using regex is **O(n)**, the iteration would be **O(n/2) = O(n)** , in the worst case we iterate in the entire string. <br> 

# References

- [Leetcode problem](https://leetcode.com/problems/valid-palindrome/description/)
