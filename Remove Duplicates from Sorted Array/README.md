# How to run

`python3 main.py < test.txt`

---

# Logic

There are two ways to solve this, the first one uses the **two pointers** concept, where one pointer is a *slow* pointer, this *slow* pointer is useful to replace its value with the proper value, and gets incremented every time that happens, the *fast* pointer is a pointer that moves each iteration. Either *main.py* and *main.cpp* use that concept. </br>

The other solution apply for python, where we convert our list into a set, by set properties, it will delete all the duplicated elements in our list to finally sort it, this will generates a list, the key part here is to use `nums[:]` instead of `nums =` , by using `nums =` doesn't replace the elements in the original list, by using `nums[:]` it replaces the original list. </br>

---

# Time Complexity

- **Two pointers**: This one is **O(N)** where **N** is the list length with **O(1)** in space complexity </br>

- **Convert the list**: The leetcode version from main.py is **O(nlogn)** due *sorted* function, and space complexity is **O(N)** where **N** is the list lenght, this is because we need to store *N* elements in our set. </br> 

Which of the two approaches are better? **O(N)** or **O(n log n)**? We are only going to consider time complexity. </br>

We can use limits for comparing order of growth.

$$ \lim_{n \to \infty} \frac{O(n \log n)}{O(n)} = \lim_{n \to \infty} \frac{t'(O(n \log n))}{g'(O(n))} = \lim_{n \to \infty} \frac{1 + \log n}{1} = \infty $$

When we have $\infty$ implies that $t(n)$ has a larger order of growth than $g(n)$. </br>

From this we can say that the approach of **convert the list** to a set and sort it is worst than using **two pointers** approach. </br>

---

# References

- [Leetcode problem](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)
- [Leetcode solution](https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/727/discuss/2107606/PyAll-4-Methods:-Intuitions-Walk-through-Wrong-answer-explanations-for-Beginners-Python)
- [Introduction to the Design and Analysis of Algorithms](https://www.amazon.com/Introduction-Design-Analysis-Algorithms-3rd/dp/0132316811)