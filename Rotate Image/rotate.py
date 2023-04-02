#!/usr/bin/env python3

def rotate(matrix: list[list[int]]) -> None:
    def column(matrix: list[list[int]], i: int) -> list[int]:
        """
        Get the corresponding column from a matrix

        Parameters
        ----------
        matrix : list[list[int]]
            The corresponding given matrix
        i : int
            The index to extract the column from the matrix
        
        Returns
        -------
        list
            A list of the corresponding column
        """
        return [row[i] for row in matrix]

    # Get the columns and save it in a list
    columns = []
    for i in range(len(matrix)):
        columns += column(matrix,i)
    
    index = len(matrix) - 1
    backup = index
    # Assign the corresponding value to our matrix
    for i in range(len(matrix)):
        for j in range(len(matrix)):
            # From the given list value, assign it to our matrix
            matrix[i][j] = columns[index]
            # Decrement to get the corresponding index
            index -= 1
        # Because the way the list is saved, we need to jump directly to some index
        backup += len(matrix)
        # Set the corresponding index
        index = backup
