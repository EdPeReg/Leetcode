# How to Run

Run **main.py** this contains the test cases for the algorithm, the **intersect.py** file is the main algorithm </br>

# Explanation

- **intersect** function: The main idea is to use **two pointers**, moving these two pointers, in this way only having one loop</br>

```
nums1 = [4,9,5], nums2 = [9,4,9,8,4]
We sort them:
nums1 = [4,5,9]
nums2 = [4,4,8,9,9]
```

After we sort them, now we need to compare each number from each list (that is why we need two pointers, one for each list) </br>
We check if the first num of our first list is less than the first num of our second list, if that is true, we increment list1 pointer </br>
If not, we check if the furst num of our second list is less than our first num of our first list, if that is true, we increment list2 pointer</br>
Otherwise both numbers are equal, that means both numbers cam be found in both lists, we increment both pointers</br>

```
First iteration
[4,5,9]
 *
[4,4,8,9,9] = Number 4 in both list, we save it and increment both pointers, [4]
 *

Second iteration
[4,5,9]
   *
[4,4,8,9,9] = 4 < 5, we increment our second pointer
   *

Third iteration
[4,5,9]
   *
[4,4,8,9,9] = 5 < 8, we increment our first pointer
     *

Fourth iteration
[4,5,9]
     *
[4,4,8,9,9] = 8 < 9, se increment our second pointer
     *

Fifth iteration
[4,5,9]
     *
[4,4,8,9,9] = Both numbers are the same, we save it and increment both pointers, [4,9]
       *

We finish our program 
```

# Time/Space complexity

- **intersect function**: Because we sort both lists, sorting in python takes **O(nlogn)** so both will be **O(nlogn) + O(nlogn)**</br>
The while iteration takes **O(n + m)** (I think, where n is length num1 and m is length num2), but we take **max(O(nlogn), O(nlogn), O(n + m)) = O(nlogn)**</br>

# References

- [Very easy hashmap and two pointers](https://leetcode.com/problems/intersection-of-two-arrays-ii/solutions/2477252/very-easy-100-fully-explained-java-c-python-python3-hashmap-two-pointers/)
- [Python two approaches](https://leetcode.com/problems/intersection-of-two-arrays-ii/solutions/1468295/python-2-approaches-3-follow-up-questions-clean-concise/)