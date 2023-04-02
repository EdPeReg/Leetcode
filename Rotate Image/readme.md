# How to Run

Run **test.py** this contains the test cases for the algorithm, the **rotate.py** is the main algorithm </br>

# Explanation

The main point to consider here is that we need to do it **in-place**, that means we can't create a new 2D matrix and allocate the corresponding values inside. </br>
The other point to take into consideration is a pattern that you can find in the given result </br>

![Example result](/images/solved.png)

As you can see in the image, the last row from the original matrix is the first column from the result, the second row from the original matrix is the second column and so on. </br>

One way I did to simplify this is to store in a list all the matrix values but getting its column, for example, taking in consideration the image above as an example, we will have a list like this: </br>

```[1,4,7,2,5,8,3,6,9]```

By having a list like this, we can get the corresponding values by using the right index and replace it in the matrix </br>

```
index = len(matrix) - 1 -> Index to be used in our list
It starts at index 2

[1,4,7,2,5,8,3,6,9] -> We get the number at this index, replace it in our matrix 
     *
[[7,2,3]
 [4,5,6]
 [7,8,9]]

[1,4,7,2,5,8,3,6,9] -> Decrement by 1, replace it in our matrix
   *

[[7,4,3]
 [4,5,6]
 [7,8,9]]

[1,4,7,2,5,8,3,6,9] -> Decrement by 1, replace it in our matrix
 *

[[7,4,1]
 [4,5,6]
 [7,8,9]]

At this point we have completed the first row, we need to get our new index, we add the 
previous start index (it was 2) + the length of our matrix (3), we have 2+3=5, this is 
our new index

[1,4,7,2,5,8,3,6,9] -> Decrement by 1, replace it in our matrix
           *

[[7,4,1]
 [8,5,6]
 [7,8,9]]

And so on, by doing this we will have the corresponding rotated matrix.
```

# Time/Space complexity

- **Time complexity**: Time complexity would be **O(N^2)** because we iterate in our entire matrix, both to get the column and to replace the values </br>
- **Space complexity**: Would be **O(N)** because we are using an extra list to store the matrix value </br>

# References

- [Leetcode problem](https://leetcode.com/problems/rotate-image/description/)
