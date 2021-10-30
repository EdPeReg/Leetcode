#!/usr/bin/env python3

from typing import List

class Solution:
    def arrayPairSum(self, nums: List[int]) -> int:
        nums.sort()
        return sum(nums[0::2])
        #  return sum(nums[i] for i in range(0,len(nums),2))

if __name__ == '__main__':
    s = Solution()
    print(s.arrayPairSum([6,2,6,5,1,2]))

