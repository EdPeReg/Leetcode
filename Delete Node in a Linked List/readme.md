# Explanation

## How to run

Run **test.py** this contains the test cases for **remove_node.py**. <br>

## Algorithm

The "difficult" part here is that we don't have access to the head of our list, also another consideration is that we don't really "remove" the element in our list, because there is no delete or free. <br>

The main idea is to start iterating from the node we have, and only change the values of each node as we go, when we reach the end of our list, we only invalidate the last node with `None` value. <br>

`list = [1,2,3,4]`
`node_to_remove = 2`

- Start iterating from the node to remove
```
[1,2,3,4]
   *
```
- Change the value of our node and go to the next node
```
[1,3,3,4]
     *
```
- Change the value of our node and check if the current node is the next-to-last, if it is, stop iterating
```
[1,3,4,4]
     *
```
- Invalidate the last node by assigning _None_.
> [1,3,4]

## Time/Space complexity

It would be **O(n)** where _n_ is the number of nodes to iterate.

# References

- [Leetcode problem](https://leetcode.com/problems/delete-node-in-a-linked-list/description/)
