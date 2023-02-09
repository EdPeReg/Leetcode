# How to run

`python3 <file.py> < test.txt`

# Functions

- **singleNumber**: The idea is to use a map to count how much the elements are repeated, we know that for elements that don't repeat, its value is **1**, if there's one element in the list, we only return that element </br>
- **xor**: We use the properties of xor to get the answer, if we apply xor for each number, we will get the number that it doesn't repeat, this is taking in consideration that only one number can be repeated twice, and one number only once, for example: </br>

```
[1,2,1,5,5]
ans = 0^1 = 1^2 = 3^1 = 2^5 = 7^5 = 2
i = 0,1,2,3,4
```

Still it's like black magic for me. </br>

# Complexity

- **singleNumber**: Complexity is **O(N)** because we need to iterate in our map to find our element, but space complexity is **O(N)**, even tho space complexity is O(N), this solution doesn't satisfy the constraint of using a space complexity of **O(1)** </br>
- **xor:** Time complexity is **O(N)** because we only need to iterate in our list, space complexity is **O(1)**, this solution fulfill the requirements </br>

# References 

- [Leetcode problem](https://leetcode.com/problems/single-number/description/)
- [Easy solution](https://leetcode.com/problems/single-number/solutions/1771720/c-easy-solutions-sorting-xor-maps-or-frequency-array/)
- [Think it through](https://leetcode.com/problems/single-number/solutions/1771771/think-it-through-time-o-n-space-o-1-python-explained/)
- [Explain why xor works](https://leetcode.com/problems/single-number/solutions/1772139/c-explained-everything-w-why-xor-works-brute-force-to-optimized-step-by-step-dry-run/)
