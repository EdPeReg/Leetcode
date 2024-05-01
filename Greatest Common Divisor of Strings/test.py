import unittest

from main import gcdOfStrings

class TestGCDofStrings(unittest.TestCase):
    def test_gcd(self):
        self.assertEqual("ABC", gcdOfStrings("ABCABC", "ABC"))
        self.assertEqual("AB", gcdOfStrings("ABABAB", "ABAB"))
        self.assertEqual("TAUXX", gcdOfStrings("TAUXXTAUXXTAUXXTAUXXTAUXX", "TAUXXTAUXXTAUXXTAUXXTAUXXTAUXXTAUXXTAUXXTAUXX"))
        self.assertEqual("ABAB", gcdOfStrings("ABABABAB", "ABAB"))
        self.assertEqual("", gcdOfStrings("ABABCCABAB", "ABAB"))
    def test_gcd_empty(self):
        self.assertEqual("", gcdOfStrings("LEET", "CODE"))
        """the expected output is correct because even though "ABC"
        is found in str1 and str2, you have "DEF" that is left-over
        in str1 so there is no gcd in this case. there can be no 'leftover'
        letters when finding a gcd."""
        self.assertEqual("", gcdOfStrings("ABCDEF", "ABC"))

if __name__ == '__main__':
    unittest.main()
