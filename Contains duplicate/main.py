import sys

def brute_force(nums: list[int]) -> bool:
    found = False

    for i in range(len(nums)):
        # We don't want to analize the sam number, so i+1 for the next number
        if nums[i] in nums[i+1:]:
            found = True
            break

    return found

def containsDuplicate(nums: list[int]) -> bool:
    found = False

    nums[:] = sorted(nums)

    for i in range(len(nums) - 1):
        if nums[i] == nums[i+1]:
            found = True
            break
    
    return found

def get_string(): return sys.stdin.readline().strip()

if __name__ == '__main__':
    n = int(get_string())

    while n:
        strs = get_string().split(",")
        print(containsDuplicate(strs))
        n -= 1