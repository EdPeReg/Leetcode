
# Explanation

The idea is to have two pointers, a _slow_ and _fast_ pointers,
when the fast pointer is different from our value, we copy the value of our fast pointer in the position of our slow pointer, incrementing both pointers, otherwise we only
increment the fast pointer.

Everytime our number in our fast pointer is different, we move that value to the left, because all the valid values should be at the left.

- Time complexity **O(N)** where N is the length of the list
- Space complexity **0(1)** no extra data structure used, algorihm in-place

# References

- [Leetcode link](https://leetcode.com/problems/remove-element/description/)
- [Solution](https://leetcode.com/problems/remove-element/solutions/127824/remove-element/)