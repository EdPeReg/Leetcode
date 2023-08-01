import unittest

from remove_nth_node_end import ListNode, removeNthFromEnd

class RemoveNthNodeEnd(unittest.TestCase):
    def test01(self):
        head = ListNode(1)
        n = 2

        head.append(2)
        head.append(3)
        head.append(4)
        head.append(5)
        head = removeNthFromEnd(head, n)

        if head:
            result = head.to_string()
        else:
            result = "[]"
        self.assertEqual("[1,2,3,5]", result)

    def test02(self):
        head = ListNode(1)
        n = 1
        head = removeNthFromEnd(head, n)

        if head:
            result = head.to_string()
        else:
            result = "[]"
        self.assertEqual("[]", result)

    def test03(self):
        head = ListNode(1)
        n = 1

        head.append(2)
        head = removeNthFromEnd(head, n)

        if head:
            result = head.to_string()
        else:
            result = "[]"
        self.assertEqual("[1]", result)

    def test04(self):
        head = ListNode(1)
        n = 2

        head.append(2)
        head = removeNthFromEnd(head, n)

        if head:
            result = head.to_string()
        else:
            result = "[]"
        self.assertEqual("[2]", result)

if __name__ == '__main__':
    unittest.main()
