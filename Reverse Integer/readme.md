# Explanation

## How to run

Run **test.py** this contains the test cases for the algorithm, the **reverse.py** is the main algorithm. </br>

## Algorithm

In order to reverse the number, we can get its last digit by using its modulo % 10, this will get the remainder, to get the result we use this line `result = result * 10 + remainder`, this will "shift" the values to the left and append the corresponing number </br>

For example, if we have `123`: </br>

```
x = 123
remainder = 3
result = 0 * 10 + 3 = 3

---

x = 12
remainder = 2
result = 3 * 10 + 2 = 32

---

x = 0
remainder = 1
result = 32 * 10 + 1 = 321

```

## Time/Space complexity

- **Time complexity**: This will be `O(log N)` because the size depends in how many digits the number has, and the amount of iterations that we do is approximately `log(N)`, for example if we have _123_, its logarithm base 10 is _log(123) = 2.08_ , that would be the amount of iterations to do, remember that is an **approximation**  </br>
- **Space complexity**: Would be **O(1)** because we aren't using extra space. </br>

# References

- [Leetcode problem](https://leetcode.com/problems/reverse-integer/description/)
