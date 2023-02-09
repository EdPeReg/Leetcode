# How to run

`python3 <file.py> < test.txt`

# Functions

- **singleNumber**: The idea is to use a map to count how much the elements are repeated, we know that for elements that don't repeat, its value is **1**, if there's one element in the list, we only return that element </br>

# Complexity

- **singleNumber**: Complexity is **O(N)** because we need to iterate in our map to find our element, but space complexity is **O(N)**, even tho space complexity is O(N), this solution doesn't satisfy the constraint of using a space complexity of **O(1)** </br>

# References 

- [Leetcode problem](https://leetcode.com/problems/single-number/description/)
