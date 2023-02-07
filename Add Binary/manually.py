import sys

def addBinary(a: str, b: str) -> str:
    i, j, carry = len(a) - 1, len(b) - 1, 0
    res = ""

    # Iterte from right to left in our strings
    while i >= 0 or j >= 0:
        # We always sum our carry, doesn't matter if it's 0
        sum = carry
        # If there is something to compute, get the number, the ord is to get 1 or 0 in number
        if i >= 0: sum += ord(a[i]) - ord('0') 
        if j >= 0: sum += ord(b[j]) - ord('0') 

        i,j = i - 1, j - 1
        carry = 1 if sum > 1 else 0
        res += str(sum % 2) # We module our sume to get the binary representation
    
    # We need to add our carry
    if carry:
        res += str(carry)
    
    # Reverse our result
    return res[::-1]

def get_string(): return sys.stdin.readline().strip()

if __name__ == '__main__':
    n = int(get_string())

    while n:
        strs = get_string().split(",")
        print(f'{strs[0]} + {strs[1]} = {addBinary(strs[0], strs[1])}')
        n -= 1