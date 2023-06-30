import unittest

from remove_node import *

class RemoveNodeTest(unittest.TestCase):
    def test01(self):
        l = ListNode(4)
        l.append(5)
        l.append(1)
        l.append(9)
        deleteNode(l.search(5))

        self.assertEqual("[4,1,9]", l.to_string())
    
    def test02(self):
        l = ListNode(4)
        l.append(5)
        l.append(1)
        l.append(9)
        deleteNode(l.search(1))

        self.assertEqual("[4,5,9]", l.to_string())

if __name__ == '__main__':
    unittest.main()
