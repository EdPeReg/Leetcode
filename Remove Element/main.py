import sys

"""
The logic behind this is to iterate in each value, if that value match with the value
we want to remove, replace that value with an invalid number, in this case -1 because
it should be in-place.

k represents the total of valid numbers in the list, the list is sorted because
the valid numbers should be at the beggining of the list, it doesn't matter the
order.

[3,2,2,3] val = 2

Replace the number to remove with an invalid number
[3,-1,-1,3] 

Sort the list
[3,3,-1,-1]

There are two valid numbers at front, return 2 as answer

Time complexity is O(N) where N is the length of the list
Space complecityy is O(1) because no additional data structure was used
"""

def removeElement(nums: list[int], val: int) -> int:
    k = 0
    for i in range(len(nums)):
        if nums[i] == val:
            nums[i] = -1
        else:
            k += 1
    nums.sort(reverse=True)
    return k

def get_string(): return sys.stdin.readline().strip()

if __name__ == '__main__':
    n = int(get_string())

    while n:
        # For this input, the last value of our list represents the value to remove in the list
        l = get_string().split(",")
        # Convert it to a list of integers
        l = list(map(int,l))
        print(f'list = {l[:-1]}, value = {l[-1]}')
        print(removeElement(l[:-1], l[-1]))
        n -= 1