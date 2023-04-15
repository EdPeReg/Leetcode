# How to Run

Run **test.py** this contains the test cases for the algorithm, the **string_to_integer.py** is the main algorithm <br>

# Explanation

## Not using regex

The main idea is to code our _atoi_ version from C/C++, one of the first things one need to do is to check if the number is either negative or positive, the next piece of code basically check if the first character of our string is positive or negative, depending of the result, we save it in our variable `sign` and we analize the next character <br>

```python
# To know if it's negative
if i == 0 and char in ('-', '+'):
    if char == '-':
        sign = -1
    continue
```

Another important line is this one, this basically will "append" our number, so if we have _431_ it will append first the _4_ then the _3_ then the _1_, this is because we are multiplying by 10. <br>

```python
result = result * 10 + int(char)
```

Another line would be this one, this will check if the result it is inside the corresponding bounds of a 32 bit integer, for example, our result is 123, our lower limit is -100 and our upper limit is 500, `max(123,-100) = 123` then `min(123,500) = 123`, 123 is in bounds. <br>

```python
return min(max(result, i32_lower), i32_upper)
```

## Using Regex

Other possible solution to use is using the awful but powerful **regex**, there is a pattern we need find, the pattern is to find only positive and negative numbers with not letters that are at the beggining of the line <br>

- \^[-+]? -> At the beggining of the line `^`, we can have '+' or '-' `[-+]`, only having one or cero `?`
- \d+    -> Followed by one or many numbers `\d+` 

```python
match = re.match(r"^[-+]?\d+", s.lstrip())
```

Here we are using `match` because we want to start match from the beggining. <br>

# Time/Space complexity

Both for _chatGPT_ and _myAtoi_ function are **O(n)** because in the worst case we iterate in the entire string. <br>
For _myAtoiRegex_ function usually the match is **O(n)** because _n_ is the length of the string. <br>

# References

- [Leetcode problem](https://leetcode.com/problems/string-to-integer-atoi/description/)
- [Regex in python](https://www.w3schools.com/python/python_regex.asp#matchobject)
- [Python regex capturing groups](https://pynative.com/python-regex-capturing-groups/)