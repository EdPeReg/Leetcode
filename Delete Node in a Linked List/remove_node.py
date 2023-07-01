#!/usr/bin/env python3

class ListNode:
    """
    Definition of a single linked list
    """
    def __init__(self, x: int):
        self.val = x
        self.next = None
    
    def append(self, x: int) -> None:
        while self.next:
            self = self.next
        nodo = ListNode(x)
        self.next = nodo
    
    def print(self) -> None:
        while self:
            print(f"{self.val} -> ", end="")
            self = self.next
        print("")
    
    def to_string(self) -> str:
        content = "["
        while self:
            content += str(self.val)
            # Avoid putting the blank at the end of the string
            if self.next:
                content += " "
            self = self.next
        content += "]"

        return content.replace(" ", ",")
        
    def search(self, val: int) -> "ListNode":
        while self:
            if self.val == val:
                return self
            self = self.next
        
        return None

def deleteNode(node: ListNode) -> None:
    """
    :type node: ListNode
    :rtype: void Do not return anything, modify node in-place instead.
    """

    node.val = node.next.val
    node.next = node.next.next

# def main():
#     first_time = True
#     while True:
#         num = int(input("Enter the number (-1 to exit)-> "))
#         if num == -1:
#             break
#         if first_time:
#             head = ListNode(num)
#             first_time = False
#         else:
#             head.append(num)
    
#     print(head.to_string())
#     deleteNode(head.search(2))
#     print(head.to_string())
        
# main()
