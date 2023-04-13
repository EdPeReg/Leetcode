# How to Run

Run **test.py** this contains the test cases for the algorithm, the **anagram.py** is the main algorithm </br>

# Explanation

Basically there are two approaches, one of the is **sorting** the strings or using a **hash table** <br>

- **function isAnagram**: This function sorts the strings, if both strings are sorted and equal, it is an anagram, otherwise isn't an anagram <br>

```
s = "anagram", t = "nagaram"
s = ['a', 'a', 'a', 'g', 'm', 'n', 'r']
t = ['a', 'a', 'a', 'g', 'm', 'n', 'r']
Equal, it is an anagram
```

```
s = "rat", t = "car"
s = ['a', 'r', 't']
t = ['a', 'c', 'r']
They are not equal, isn't an anagram
```

- **function isAnagramHash**: The idea is to count how many times the letters are repeated both for _s_ and _t_ strings, if the value of each letters for the string _s_ matches with the value of each letters for the string _t_, then is an anagram, because the number of letters are equal, if there are an extra letter or the number of letters don't match, isn't an anagram, remember that two dictionaries are equal if their **values** are the **same**, the **order doesn't matter**. <br>

```
s = "anagram", t = "nagaram"
ds = {'a': 3, 'n': 1, 'g': 1, 'r': 1, 'm': 1}
dt = {'n': 1, 'a': 3, 'g': 1, 'r': 1, 'm': 1}
Both dictionaries are equal
```

```
s = "rat", t = "car"
ds = {'r': 1, 'a': 1, 't': 1}
dt = {'c': 1, 'a': 1, 'r': 1}
They are not equal, key c is no in the ds
```

- **function isAnagramTimeLimit**: The main idea about this function was to use two pointers, a _left_ pointer and a _right_ pointer, traverse both strings using those pointers to see if they match and if it wasn't visited, this function gives **time limit**. <br>

# Time/Space complexity

- **function isAnagram**: Time complexity is **O(nlogn)** because we are using _sorted_ function, space complexity is probably **O(1)**. <br>

- **function isAnagramHash**: Time complexity is **O(n)** because we are iterating for both strings, the two for loops are not nested, space complexity is **O(n)** because we are using a dictionary to store the occurences for each letter. <br>

- **function isAnagramChatGPT**: Time complexity is **O(n^2)**, this is due because in the worst case we are iterating for the entire length for _s_ and _t_. <br>

# References

- [Leetcode problem](https://leetcode.com/problems/valid-anagram/description/)
- [Alternatives solutions](https://leetcode.com/problems/valid-anagram/solutions/66499/python-solutions-sort-and-dictionary/)
- [What is an anagram](https://www.grammarly.com/blog/anagram/)
- [Comparing dictionaries in python](https://www.askpython.com/python/dictionary/compare-two-dictionaries)
