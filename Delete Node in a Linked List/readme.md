# Explanation

## How to run

Run **test.py** this contains the test cases for **remove_node.py**. <br>

## Algorithm

The "difficult" part here is that we don't have access to the head of our list, also another consideration is that we don't really "remove" the element in our list, because there is no delete or free. <br>

We can only assign the current node the value of the next node, and once we do that, for the current node just bypass the next node. 

## Time/Space complexity

It would be **O(1)** because we are only modifiying the pointer.

# References

- [Leetcode problem](https://leetcode.com/problems/delete-node-in-a-linked-list/description/)
