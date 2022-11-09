#!/usr/bin/env python3

"""
The idea is to use a dynamic slide window to resolve this problem,
here we don't have the window size, so it increases dinamically and
decreases once we find that our sum is greater or equal to our target.

Here our left is the left pointer used to shrink the slide window

The inner while loop checks when our window value is greater or equal to our
target, if that happens, we need to shrink our window because we want to find
the minimal length.

When is shrinked we update our left pointer and the current value of that
shrinked window; we append the window in a buffer to finally get the minimum
length.
"""

def minSubArrayLen(target: int, nums: list[int]) -> int:
    buffer = []     # Store the minimal lengths.
    window_value = 0
    left = 0

    for right, value in enumerate(nums):
        window_value += value

        while window_value >= target:
            # Update our window value.
            window_value = window_value - nums[left]
            # To get window size, we do this little formula.
            buffer.append(right - left + 1)
            # Update our left pointer.
            left += 1

    return min(buffer) if buffer else 0

"""
Input: target = 7, nums = [2,3,1,2,4,3]
Output: 2
Explanation: The subarray [4,3] has the minimal length under the problem constraint.

Input: target = 4, nums = [1,4,4]
Output: 1

Input: target = 11, nums = [1,1,1,1,1,1,1,1]
Output: 0
"""

print(minSubArrayLen(11, [1,1,1,1,1,1,1,1,1,1]))
