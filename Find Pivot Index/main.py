import sys

def get_string(): return sys.stdin.readline().strip()

def pivotIndex(nums: list[int]) -> int:
    leftsum, rightsum = 0, 0
    index = -1

    for i in range(len(nums)):
        if i == 0:
            leftsum = 0
        else:
            # Sum our left part
            leftsum += nums[i-1]
        # Sum our right part
        rightsum = sum(nums[i+1:])

        if leftsum == rightsum:
            return i
    
    return index

def leetcode(nums: list[int]) -> int:
    left, right = 0, sum(nums)

    for index, num in enumerate(nums):
        right -= num
        if left == right:
            return index
        left += num
    
    return -1

if __name__ == '__main__':
    n = int(get_string())

    while n:
        strs = list(get_string().split(','))
        strs = list(map(int,strs))
        print(f'{strs} = {leetcode(strs)}')
        n -= 1