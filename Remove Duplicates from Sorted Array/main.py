import sys

def removeDuplicates(nums: list[int]) -> int:
    left = 1
        
    for right in range(1, len(nums)):
        if nums[right] != nums[right-1]:
            nums[left] = nums[right]
            left += 1
    
    return left

def leetcode(nums: list[int]) -> int:
    nums[:] = sorted(set(nums))
    return len(nums)

def get_string(): return sys.stdin.readline().strip()

if __name__ == '__main__':
    n = int(get_string())

    while n:
        strs = list(map(int, get_string().split(',')))
        print(f'{strs} = {removeDuplicates(strs)} --> {strs}')
        n -= 1