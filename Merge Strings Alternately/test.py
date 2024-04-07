import unittest

from main import mergeAlternately, mergeAlternatelyOnePointer, mergeAlternatelyWeird

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

    def test04(self):
        word1 = "a"
        word2 = "p"
        self.assertEqual("ap", mergeAlternately(word1, word2))

class TestMergeAlternatelyOnePointer(unittest.TestCase):
    def test01(self):
        word1 = "abc"
        word2 = "pqr"
        self.assertEqual("apbqcr", mergeAlternatelyOnePointer(word1, word2))

    def test02(self):
        word1 = "ab"
        word2 = "pqrs"
        self.assertEqual("apbqrs", mergeAlternatelyOnePointer(word1, word2))

    def test03(self):
        word1 = "abcd"
        word2 = "pq"
        self.assertEqual("apbqcd", mergeAlternatelyOnePointer(word1, word2))

    def test04(self):
        word1 = "a"
        word2 = "p"
        self.assertEqual("ap", mergeAlternately(word1, word2))

class TestMergeAlternatelyWeird(unittest.TestCase):
    def test01(self):
        word1 = "abc"
        word2 = "pqr"
        self.assertEqual("apbqcr", mergeAlternatelyWeird(word1, word2))

    def test02(self):
        word1 = "ab"
        word2 = "pqrs"
        self.assertEqual("apbqrs", mergeAlternatelyWeird(word1, word2))

    def test03(self):
        word1 = "abcd"
        word2 = "pq"
        self.assertEqual("apbqcd", mergeAlternatelyWeird(word1, word2))

    def test04(self):
        word1 = "a"
        word2 = "p"
        self.assertEqual("ap", mergeAlternately(word1, word2))

if __name__ == '__main__':
    unittest.main()
