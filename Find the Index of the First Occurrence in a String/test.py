import unittest

from strstr import strStr

class StringFind(unittest.TestCase):
    def test01(self):
        self.assertEqual(strStr("sadbutsad", "sad"), 0)
    
    def test02(self):
        self.assertEqual(strStr("leetcode", "leeto"), -1)
    
    def test03(self):
        self.assertEqual(strStr("hello", "ll"), 2)
    
    def test04(self):
        self.assertEqual(strStr("a", "a"), 0)
    
    def test05(self):
        self.assertEqual(strStr("abc", "c"), 2)

    def test06(self):
        self.assertEqual(strStr("aaa", "aaaa"), -1)
    
    def test07(self):
        self.assertEqual(strStr("mississippi", "issip"), 4)

if __name__ == '__main__':
    unittest.main()
