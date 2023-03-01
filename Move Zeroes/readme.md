# How to Run

Run **main.py** this contains the test cases for the algorithm, the **MoveZeroes.py** is the main algorithm </br>

# Explanation

- **MoveZeroes** function: The main idea is to use **two pointers**, the left pointer will be the pointer that will help you to know the position where you are going to swap the values, right pointer is going to check constantly the value to start swaping

```
[0,1,0,3,12] = [1,3,12,0,0]

[0,1,0,3,12] -> We place the two pointers, left and right, swap 0 and 1 and increment both pointers
 * *

[1,0,0,3,12] -> Left pointer is 0, only increase the right pointer
   * *

[1,0,0,3,12] -> Swap 0 and 3, increment both pointers
   *   *

[1,3,0,0,12] -> Swap 0 and 12, increment both pointers
     *   *

[1,3,12,0,0] -> Swap 0 and 12, increment both pointers
        *   *

Program finish, right pointer is out of bounds
```

# Time/Space complexity

- **intersect function**: Time complexity would be **O(n)** because we iterate in the entire length of the list </br> 
while space complexity is **O(1)** because this algorithm works as in-place </br> 

# References

- [Leetcode problem](https://leetcode.com/problems/move-zeroes/description/)
- [Better and compact solution](https://leetcode.com/problems/move-zeroes/solutions/3236411/283-space-96-33-solution-with-step-by-step-explanation/)