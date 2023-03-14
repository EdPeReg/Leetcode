
def isValidSudoku(board: list[list[str]]) -> bool:
    is_valid = True
    SQUARE_TOTAL = 81
    lim_sub_matrix = 3
    curr_square, j_pos, i = 0, 0, 0
    j = j_pos
    sub_matrix = []

    # Check every square in the board
    while i < len(board) and curr_square < SQUARE_TOTAL:
        # Check every quadrant and append all the numbers in this quadrant into a list
        while j < lim_sub_matrix:
            num = board[i][j]
            if num.isnumeric():
                sub_matrix.append(num)
            j += 1
            curr_square += 1
        
        i += 1
        j = j_pos

        # Check valid quadrant
        if i != 0 and i % 3 == 0:
            for index, elem in enumerate(sub_matrix):
                if elem in sub_matrix[index+1:]:
                    return False
            # Finish to check if a number is in the quadrant, clean the list
            sub_matrix = []

        # We reach the bottom of the board, reset values
        if i == len(board):
            j_pos += 3
            lim_sub_matrix += 3
            j = j_pos
            i = 0

    # Check for repeated number in rows and colums
    for i in range(len(board)):
        # Get the column in a list
        col = [row[i] for row in board]

        for j in range(len(board)):
            num_row = board[i][j]
            num_col = col[j]

            # Check if the number is in the same row or column
            if (num_row.isnumeric() and num_row in board[i][j+1:]) or (num_col.isnumeric() and num_col in col[j+1:]):
                return False

    return is_valid
