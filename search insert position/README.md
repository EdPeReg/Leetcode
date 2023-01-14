# Logic

Becasue it asks to use **O(logn)** algorithm for searching, and the array is already srted, this fits with *binary search*
So we only apply *binary search* for this problem.

To accomplish when we don't find the element in the array, we just need to return the *left* variable,
this variable has already the corresponding position.

---
# Examples

**Note:** The number that is bold, is the answer.

[1,2,3,4,5,6,7,8], target = 7 </br>
L = 4,6 </br>
R = 7 </br>
m = 3,5,**6** </br>

----
[1,3,5,6], target = 2 </br>
L = 0,**1** </br>
R = 3,0 </br>
m = 1,0 </br>

----
[1,3,5,6], target = 7 </br>
L = 0,2,3,**4** </br>
R = 3 </br>
m = 1,2,3 </br>

----
[2,3,5,6], target = 1 </br>
L = **0** </br>
R = 3,0,-1 </br>
m = 1,0 </br>

---
# Complexity
- Time is **O(logn)** because binary search was used, we are dividing
the search by a constant
- Space is **O(1)** because no extra space was needed

---
# References

- [Problem](https://leetcode.com/problems/search-insert-position/description/)
