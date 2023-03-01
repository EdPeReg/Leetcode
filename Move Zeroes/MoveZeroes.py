def moveZeroes(nums: list[int]) -> list:
    # It tells us about where the non-zero number should be placed
    left = 0

    for right in range(len(nums)):
        if nums[right] != 0:
            nums[left], nums[right] = nums[right], nums[left]
            left += 1
    
    return nums