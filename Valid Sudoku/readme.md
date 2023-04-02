# How to Run

Run **test.py** this contains the test cases for the algorithm, the **sudoky.py** is the main algorithm </br>

# Explanation

- **isValidSudoku**: The idea first is to analize every quadrant in the Sudoku, adding each number that is inside the quadrant in a list and check if the number is repeated, if it is, then return False. I analize the quadrants in order like in the picture </br>

![Sudoku board](https://github.com/EdPeReg/Leetcode/blob/7a0ad76329c89fcd8ff8d8c37b612ba15a46538c/Valid%20Sudoku/pictures/board_sudoku.png)

The ``j = j_pos`` updates where are we going to start to analize the quadrant, for the entire left quadrant we start at position 0, for all the quadrants that are in the middle we start at position 3, and for the entire quadrants in the right we start at position 6 </br>

![It shows where you should start at each quadrant](https://github.com/EdPeReg/Leetcode/blob/7a0ad76329c89fcd8ff8d8c37b612ba15a46538c/Valid%20Sudoku/pictures/sudoku_board02.png)

We need to check if we have a valid quadrant, for this it only checks if a number is repeated in the current quadrant </br>

```python
 # Check valid quadrant
if i != 0 and i % 3 == 0:
    for index, elem in enumerate(sub_matrix):
        if elem in sub_matrix[index+1:]:
            return False
    # Finish to check if a number is in the quadrant, clean the list
    sub_matrix = []
```

Once we finish to analize the last quadrant that is at the bottom of the board, we need to start again, but now we the quadrant that is in the top, for that we reset our values to start in a new position </br>

```python
# We reach the bottom of the board, reset values
if i == len(board):
    j_pos += 3
    lim_sub_matrix += 3
    j = j_pos
    i = 0
```

To check if a number is repeated in a row or col, is very easy, we only iterate for the entire row and we get the entire column, we extract the number and check if the number is repeated </br>

# Time/Space complexity

- **isValidSudoku**: For **time complexity**, if we consider `col = [row[i] for row in board]` to have O(n), it would be O(n^2) + O(n^3) = O(n^3), but if we don't consider `col [row[i] for row in board]` it would be O(n^2) + O(n^2) = O(n^2). </br>
For **space complexity** I think it would be O(n) because we are using two list, _col_ and *sub_matrix* </br>

# References

- [Leetcode problem](https://leetcode.com/problems/valid-sudoku/description/)
