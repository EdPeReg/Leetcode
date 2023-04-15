def myAtoi(s: str) -> int:
    if len(s) == 0 or len(s) == 1 and not s.isdigit():
        return 0

    i32_lower = -(2**31)
    i32_upper = 2**31 - 1
    result = "0"

    # Remove left white spaces
    s = s.lstrip()

    for i, char in enumerate(s):
        # To know if it's negative
        if i == 0 and s[i] == '-':
            # We have an non digit next
            if len(s) != 1 and not s[i+1].isdigit():
                return 0
            result = ""
        elif i == 0 and s[i] == '+':
            continue
        elif not char.isdigit():
            result = int(result)
            break
        # Append a digit
        result += char
    
    result = int(result)

    if result < i32_lower:
        result = i32_lower
    elif result > i32_upper:
        result = i32_upper
    return result
