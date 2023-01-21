
There are basically two versions, one where it's more focus in using python functions and other one with it's made manually.

# How to run

`python3 <program.py> < test.txt`

# With Functions

The idea is simple, just convert the list of integers into an integer, sum it 1 and convert i again in a list of integers.

# Manually

We only add the number if it's less than 9, for example: </br>
- [1,2,3] -> 3 should be sum, given [1,2,4] </br>

If the number is 9, it means this number should be 0 </br>
- [1,2,9] -> This 9 should be 0, we have now [1,2,0], now we need to sum 1 to 2 </br>
- [1,3,0] </br>

Also there is the case where all are 9: </br>
- [9,9,9] -> Because all are 9, they convert to 0 </br>
- [0,0,0] -> But 999+1 is not 000, should be 1000, we only add 1 at the beggining of the list </br>
- [1,0,0,0] </br>

# Complexity

- functions.py: I think the complexity is **O(n)** where *n* is the size of the list, it needs to iterate in the entire list to convert it into a single number and convert it back to a list. </br>
- manually.py: Will be **O(n)** because it will iterate in the entire list size, the worst case would be a list like this [9,9,9] </br> 

# References:

- [LeetCode problem](https://leetcode.com/problems/plus-one/description/)