import unittest

from palindrome import isPalindrome

class Palindrome_test(unittest.TestCase):
    def test01(self):
        self.assertEqual(isPalindrome("A man, a plan, a canal: Panama"), True)

    def test02(self):
        self.assertEqual(isPalindrome("race a car"), False)

    def test03(self):
        self.assertEqual(isPalindrome(" "), True)

if __name__ == '__main__':
    unittest.main()
