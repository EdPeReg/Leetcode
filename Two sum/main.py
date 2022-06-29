#!/usr/bin/env python3


"""
Complexity is O(n) and space is also O(n), if we traverse in the worse case
the entire list, we will also need to store all the elements in our map.
"""
def twoSum(nums: list[int], target: int) -> list[int]:
    seen = {}
    
    for i, value in enumerate(nums):
        remaining = target - nums[i]

        if remaining in seen:
            return [i, seen[remaining]]
        
        seen[value] = i
    

if __name__ == '__main__':
    n = int(input(""))
    target = int(input(""))

    nums = [(int(input(""))) for i in range(n)]
    nums = twoSum(nums, target)
    print(nums)