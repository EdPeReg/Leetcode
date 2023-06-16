# How to Run

Run **test.py** this contains the test cases for the algorithm, the **palindrome.py** is the main algorithm </br>

# Explanation

## strStr()

Basically is to find a substring in a string, Python has a nice shortcut by using **slicing**, let's take the example the next two words: `hello` and `ll`. <br>

The idea is to iterate in the haystack (which is _hello_) and compare each letter to the first letter of needle (_ll_), there will be a point that the letter will match: <br>

`hello` <br>
`  ll` 

The first letter of needle match at position position 2 in haystack. <br>
Once we found the position where they match, we need to get the substring `ll` from needle by using slicing like this: <br>
`haystack[i : i + len(needle)]` <br>

We have `haystack[2 : 2+2] = haystack[2:4] = ll` <br>

We are adding `i + len(needle)` because the second argument for slicing starts at the beggining of the string, and not from `i` position, if we only write `len(needle)` we will have the incorrect substring, we want the second argument start from `i` position, not from the beggining of the string: <br>

`haystack[i : len(needle)] = haystack[2:2] = ''`

# Time/Space complexity

## strStr()

I think the complexity is *O(n\*m)* , where **n** is the iteration for the word needle and **m** is the creation of the substring.

# References

- [Find the Index of the First Occurrence in a String](https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/)
