#!/usr/bin/env pyhton3

import sys

def singleNumber(nums: list[int]) -> int:
    d = {num:0 for num in nums}

    for num in nums:
        if num in d:
            d[num] += 1
    
    for key, value in d.items():
        if value == 1:
            return key
    return nums[0]

def xor(nums: list[int]) -> int:
    res = 0

    for num in nums:
        res ^= num
    return res

def get_string(): return sys.stdin.readline().strip()

if __name__ == '__main__':
    n = int(get_string())

    while n:
        strs = list(map(int,get_string().split(',')))
        print(f'{strs} = {singleNumber(strs)}')
        n -= 1
