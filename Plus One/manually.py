import sys

def plusOne(digits: list[int]) -> list[int]:
    for i in range(len(digits)-1,-1,-1):
        if digits[i] < 9:
            digits[i] += 1
            return digits
        digits[i] = 0
    
    # This is the only case when we have [9,9,9], we want to have [1,0,0,0]
    digits.insert(0,1)
    return digits

def get_string(): return sys.stdin.readline().strip()

if __name__ == '__main__':
    n = int(get_string())

    while n:
        # For this input, the last value of our list represents the value to remove in the list
        l = get_string().split(",")
        # Convert it to a list of integers
        l = list(map(int,l))
        print(f'{l} = {plusOne(l)}')
        n -= 1