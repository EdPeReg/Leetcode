import sys

def removeElement(nums: list[int], val: int) -> int:
    slow = 0
    for num in nums:
        if num != val:
            nums[slow] = num
            slow += 1
    
    return slow

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