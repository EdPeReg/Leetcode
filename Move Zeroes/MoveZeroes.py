def moveZeroes(nums: list[int]) -> list:
    left = 0
    right = 1
    n = len(nums) - 1

    while right <= n:
        if nums[left] != 0:
            left += 1
        elif nums[right] != 0:
            nums[left], nums[right] = nums[right], nums[left]
            left += 1

        right += 1
    
    return nums