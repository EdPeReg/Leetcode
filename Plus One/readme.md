
There are basically two versions, one where it's more focus in using python functions and other one with it's made manually.

# How to run

`python3 <program.py> < test.txt`

# With Functions

The idea is simple, just convert the list of integers into an integer, sum it 1 and convert i again in a list of integers.

# Manually

The idea is to iterate to each number and add it the *carry* if it's necessary, this will tells us when the next number will need to be added or not. For example: </br>

Here we need to add *9+1 = 10*, so we have a carry of 1, this pass to the left and the right number converts to 0 </br>
- [9] -> carry = 1 </br>
- [1,0] -> carry = 0 </br>

Or also this example: </br>
- [9,9] -> 9+1=10, we set our carry to 1 </br>
- [9,0] -> We add now the 9 with our carry, 9+1=10, we have again our carry = 1 </br>
- [0,0] -> Adding 99+1=100, so we need to add our carry to our list at the beggining </br>
- [1,0,0]

# Complexity

- functions.py: I think the complexity is **O(n)** where *n* is the size of the list, it needs to iterate in the entire list to convert it into a single number and convert it back to a list. </br>
- manually.py: Will be **O(n)** because it will iterate in the entire list size, the worst case would be a list like this [9,9,9] </br> 

# References:

- [LeetCode problem](https://leetcode.com/problems/plus-one/description/)