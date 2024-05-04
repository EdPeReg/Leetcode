import unittest

from main import kidsWithCandies

class TestKidsWithCandies(unittest.TestCase):
    def test_kids_with_candies(self):
        self.assertEqual([True,True,True,False,True], kidsWithCandies([2,3,5,1,3], 3))
        self.assertEqual([True,False,False,False,False], kidsWithCandies([4,2,1,1,2], 1))
        self.assertEqual([True,False,True], kidsWithCandies([12,1,12], 10))

if __name__ == '__main__':
    unittest.main()
