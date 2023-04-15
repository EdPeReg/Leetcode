def myAtoi(s: str) -> int:
    if not s:
        return 0

    i32_lower = -(2**31)
    i32_upper = 2**31 - 1
    result = 0
    sign = 1

    # Remove left white spaces
    s = s.lstrip()

    for i, char in enumerate(s):
        # To know if it's negative
        if i == 0 and char in ('-', '+'):
            if char == '-':
                sign = -1
            continue
        if char.isdigit():
            result = result * 10 + int(char)
        else:
            break

    result *= sign
    return min(max(result, i32_lower), i32_upper)

# ChatGPT
def myAtoiChatGPT(s: str) -> int:
    if not s:
        return 0

    i32_lower = -(2**31)
    i32_upper = 2**31 - 1
    result = 0
    sign = 1
    i = 0

    # Remove leading whitespaces
    while i < len(s) and s[i] == ' ':
        i += 1

    # Check for optional sign
    if i < len(s) and (s[i] == '+' or s[i] == '-'):
        if s[i] == '-':
            sign = -1
        i += 1

    # Process the remaining characters
    while i < len(s) and s[i].isdigit():
        result = result * 10 + int(s[i])
        i += 1

    result *= sign

    if result < i32_lower:
        return i32_lower
    elif result > i32_upper:
        return i32_upper
    else:
        return result
