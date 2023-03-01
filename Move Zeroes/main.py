#!/usr/bin/env python3

import unittest
from MoveZeroes import moveZeroes

class Test(unittest.TestCase):
    def test1(self):
        l1, r, = [0,1,0,3,12], [1,3,12,0,0]
        self.assertEqual(moveZeroes(l1), r, f'Should be {r}')

    def test2(self):
        l1, r = [0], [0]
        self.assertEqual(moveZeroes(l1), r, f'Should be {r}')

    def test3(self):
        l1, r = [4,2,4,0,0,3,0,5,1,0], [4,2,4,3,5,1,0,0,0,0]
        self.assertEqual(moveZeroes(l1), r, f'Should be {r}')

if __name__ == '__main__':
    unittest.main()
