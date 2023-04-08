#!/usr/bin/env python3

def reverse(x: int) -> int:
    # Get the limits of a 32 bit integer
    upper_limit = 2**31 - 1
    lower_limit = -(2**31)
    sign = -1 if x < 0 else 1
    result = 0
    x = abs(x)

    # Reverse the number
    while x != 0:
        reminder = x % 10
        # Invert original number, we multiply by 10 to left "shift" the value
        result = result * 10 + reminder
        x //= 10

        # Out of bounds
        if result < lower_limit or result > upper_limit:
            return 0
    return sign * result
