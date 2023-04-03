#!/usr/bin/env python3


def rotate(matrix: list[list[int]]) -> None:
    n = len(matrix)

    # Get matrix transpose
    for i in range(n):
        for j in range(i, n):
            matrix[i][j], matrix[j][i] = matrix[j][i], matrix[i][j]

    # Revert the row
    for i in range(len(matrix)):
        # Take this row, from the beggining to the end and revert it
        matrix[i] = matrix[i][::-1]
