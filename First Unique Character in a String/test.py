import unittest

from unique import firstUniqChar

class UniqueTest(unittest.TestCase):
    def test01(self):
        self.assertEqual(firstUniqChar('leetcode'), 0)
    def test02(self):
        self.assertEqual(firstUniqChar('loveleetcode'), 2)
    def test03(self):
        self.assertEqual(firstUniqChar('aabb'), -1)

if __name__ == '__main__':
    unittest.main()
