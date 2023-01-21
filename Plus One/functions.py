import sys

def plusOne(digits: list[int]) -> list[int]:
    num = int(''.join(map(str, digits)))
    num += 1
    digits = list(map(int, str(num)))
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