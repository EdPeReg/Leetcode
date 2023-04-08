import unittest

from reverse import reverse

class ReverseTest(unittest.TestCase):
    def test_num1(self):
        x = 123
        self.assertEqual(reverse(x), 321)
    def test_num2(self):
        x = -123
        self.assertEqual(reverse(x), -321)
    def test_num3(self):
        x = 120
        self.assertEqual(reverse(x), 21)
    def test_num4(self):
        x = 0
        self.assertEqual(reverse(x), 0)
    def test_num5(self):
        x = 1534236469
        self.assertEqual(reverse(x), 0)

if __name__ == '__main__':
    unittest.main()
