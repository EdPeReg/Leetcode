
# How to run

`python3 <file.py> < test.txt`

# Files

- **main.py**: The idea is to iterate the entire list to get the pivot index, for that, we can continuosly sum the left part of the list when we are iterating in our list, to get the left part, we only use **sum**, indicating the starting position, to finally compare both sums
- **main.cpp**: We can use a little math formula to obtain the right sum, without using another for loop. </br>
`S - nums[i] - sumleft` </br>
Where S is the total sum of the vector, i is the current index (pivot) and sumleft is the total sum from all the numbers that are to the left from our pivot

# Complexity

- **main.py**: Probably the complexity is **O(N^2)** because also **sum** is **O(N)**
- **main.cpp**: Complexity is O(N), we need to iterate to find our correct pivot </br>

# References 

- [Find pivot index](https://leetcode.com/problems/find-pivot-index/description/)