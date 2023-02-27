#!/usr/bin/env python3

import unittest
from intersect import intersect

class Test(unittest.TestCase):
    def test1(self):
        l1, l2, r = [2,1], [1,2], [1,2]
        self.assertEqual(intersect(l1, l2), r, f'Should be {r}')

    def test2(self):
        l1, l2, r = [1,2,2,1], [2], [2]
        self.assertEqual(intersect(l1, l2), r, f'Should be {r}')

    def test3(self):
        l1, l2, r = [1,2,2,1], [2,2], [2,2]
        self.assertEqual(intersect(l1, l2), r, f'Should be {r}')

    def test4(self):
        l1, l2, r = [4,9,5], [9,4,9,8,4], [4,9]
        self.assertEqual(intersect(l1, l2), r, f'Should be {r}')

if __name__ == '__main__':
    unittest.main()
