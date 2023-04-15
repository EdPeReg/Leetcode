import unittest

from string_to_integer import myAtoi

class AtoiTest(unittest.TestCase):
    def test01(self):
        self.assertEqual(myAtoi("42"), 42)
    def test02(self):
        self.assertEqual(myAtoi("   -42"), -42)
    def test03(self):
        self.assertEqual(myAtoi("4193 with words"), 4193)
    def test04(self):
        self.assertEqual(myAtoi("letra 412 mas letras"), 0)
    def test05(self):
        self.assertEqual(myAtoi("54 23"), 54)
    def test06(self):
        self.assertEqual(myAtoi("0032"), 32)
    def test07(self):
        self.assertEqual(myAtoi("41.22"), 41)
    def test08(self):
        self.assertEqual(myAtoi("hola"), 0)
    def test09(self):
        self.assertEqual(myAtoi(".76"), 0)
    def test10(self):
        self.assertEqual(myAtoi("-541-32"), -541)
    def test11(self):
        self.assertEqual(myAtoi("1"), 1)
    def test12(self):
        self.assertEqual(myAtoi("-91283472332"), -2147483648)
    def test13(self):
        self.assertEqual(myAtoi("-+12"), 0)
    def test14(self):
        self.assertEqual(myAtoi("-"), 0)
    def test15(self):
        self.assertEqual(myAtoi("+1"), 1)
    def test16(self):
        self.assertEqual(myAtoi("      -11919730356x"), -2147483648)
    def test17(self):
        self.assertEqual(myAtoi("+-31"), 0)

if __name__ == '__main__':
    unittest.main()
