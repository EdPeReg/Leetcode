import unittest

from main import mergeAlternately

class TestMergeAlternately(unittest.TestCase):
    def test01(self):
        word1 = "abc"
        word2 = "pqr"
        self.assertEqual("apbqcr", mergeAlternately(word1, word2))

    def test02(self):
        word1 = "ab"
        word2 = "pqrs"
        self.assertEqual("apbqrs", mergeAlternately(word1, word2))

    def test03(self):
        word1 = "abcd"
        word2 = "pq"
        self.assertEqual("apbqcd", mergeAlternately(word1, word2))

if __name__ == '__main__':
    unittest.main()
