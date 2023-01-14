#!/usr/bin/env python3

import sys

def searchInsert(nums: list[int], target:int) -> int:
    left = 0
    right = len(nums) - 1

    while left <= right:
        middle = left + (right - left) // 2

        if nums[middle] == target:
            return middle
        elif nums[middle] < target:
            left = middle + 1
        elif nums[middle] > target:
            right = middle - 1
    
    # If we don't find the number, left index has the correct position to insert it
    return left

def get_string(): return sys.stdin.readline().strip()

if __name__ == '__main__':
    n = int(get_string())
    while n > 0:
        l = get_string().split(',')
        l = list(map(int,l))

        print(f'list = {l[:-1]}, target = {l[-1]}')
        print(searchInsert(l[:-1], l[-1]))
        n -= 1