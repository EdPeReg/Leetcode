import sys

def plusOne(digits: list[int]) -> list[int]:
    # At first we only need to add the last digit
    digits[-1] += 1
        
    carry = 0
    # Start from the right to the left, only add the carry when is necessary
    for i in range(len(digits)-1,-1,-1):
        digits[i] += carry
        # We need to set our carry, we can't have a number like this 10, we need to separate it into [1,0]
        if digits[i] > 9:
            digits[i] = 0
            carry = 1
        # No need to set ourcarry, and also is not necessary to analize the other numbers
        else:
            carry = 0
            break
    
    # There is the case where a carry exist after checking all the numbers, in this case add the carry at the beggining
    if carry != 0:
        digits.insert(0,carry)
    
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