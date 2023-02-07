
# How to run

`python3 <file.py> < test.txt`

# Files

- **main.py**: Basically I used python functions, what is the time complexity for this? I don't know, but the idea is to convert the strings into decimal, do the sum and finally convert it to binary, in order to not get the python binary notation, we only select starting from the second position. </br>
- **manually.py**: The idea is to do the operation manually, we traverse from right to left our strings until there is no "numbers" to analize. We also take the concept of _carry_ , which is important to perform binary sum. Probably the tricky part is when we use _ord_ operations, in order to get either _1_ or _0_ , we only substract their ASCII values. Also another tricky part is the modulos operation, we can use modulo to get either _1_ or _0_ and append it in our result </br>

# Complexity

- **main.py**: Not sure about this, it would check the complexity for the python functions </br>
- **manually.py**: This one is **O(max(M,N))** where **M** is the length of the first string and **N** is the length of the second string </br>

# References 

- [Detailed explanation](https://leetcode.com/problems/add-binary/solutions/1679423/well-detailed-explaination-java-c-python-easy-for-mind-to-accept-it/)