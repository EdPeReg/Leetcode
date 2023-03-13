
def isValidSudoku(board: list[list[str]]) -> bool:
    is_valid = True
    lim_sub_matrix = 3
    cont, j_pos, i = 0, 0, 0
    j = j_pos
    sub_mat = []

    # Check valid quadrant
    while i < len(board) and cont < 81:
        while j < lim_sub_matrix:
            num = board[i][j]
            if num.isnumeric():
                sub_mat.append(num)
            j += 1
            cont += 1
        
        i += 1
        j = j_pos

        # Check valid quadrant
        if i != 0 and i % 3 == 0:
            for index, elem in enumerate(sub_mat):
                if elem in sub_mat[index+1:]:
                    return False
            sub_mat = []

        if i == len(board):
            j_pos += 3
            lim_sub_matrix += 3
            j = j_pos
            i = 0

    # Check for repeated number in rows
    for i in range(len(board)):
        # Get the column in a list
        col = [r[i] for r in board]

        for j in range(len(board)):
            num_row = board[i][j]
            num_col = col[j]

            # Check if the number is in the same row or column
            if (num_row.isnumeric() and num_row in board[i][j+1:]) or (num_col.isnumeric() and num_col in col[j+1:]):
                return False

    return is_valid
