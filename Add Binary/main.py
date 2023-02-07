# My version

import sys

def addBinary(a: str, b: str) -> str:
    num1 = int(a,2)
    num2 = int(b,2)

    return bin(num1+num2)[2:]

def get_string(): return sys.stdin.readline().strip()

if __name__ == '__main__':
    n = int(get_string())

    while n:
        strs = get_string().split(",")
        print(f'{strs[0]} + {strs[1]} = {addBinary(strs[0], strs[1])}')
        n -= 1