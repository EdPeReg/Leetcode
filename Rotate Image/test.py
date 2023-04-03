import unittest

from rotate import rotate


class RotateTest(unittest.TestCase):
    def test_3x3(self):
        """
        Test a 3x3 matrix
        """
        matrix_3x3 = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
        rotate(matrix_3x3)
        self.assertEqual(matrix_3x3, [[7, 4, 1], [8, 5, 2], [9, 6, 3]])

    def test_4x4(self):
        """
        Test a 4x4 matrix
        """
        matrix_4x4 = [[5, 1, 9, 11], [2, 4, 8, 10],
                      [13, 3, 6, 7], [15, 14, 12, 16]]
        rotate(matrix_4x4)
        self.assertEqual(matrix_4x4, [[15, 13, 2, 5], [14, 3, 4, 1], [
                         12, 6, 8, 9], [16, 7, 10, 11]])


if __name__ == '__main__':
    unittest.main()
