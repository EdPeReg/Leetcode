#!/usr/bin/env python3

from typing import Optional

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

    def append(self, val: int) -> None:
        while self.next:
            self = self.next
        self.next = ListNode(val)
    
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

def removeNthFronEndLeetCode(head: Optional[ListNode], n: int) -> Optional[ListNode]:
    left = right = head

    for _ in range(n):
        right = right.next
    
    if not right:
        return head.next

    while right.next:
        right = right.next
        left = left.next
    
    left.next = left.next.next
    return head

# With Optional, indicates that the argument ListNode can be None or not, 
# also the same with the return
def removeNthFromEnd(head: Optional[ListNode], n: int) -> Optional[ListNode]:
    cont1, cont2 = 0, 0
    pointer1, pointer2 = head, head
    prev = None

    # We only have 1 element in our list
    if head.next == None:
        # According to constraints -1 is invalid
        head = None
    else:
        while pointer1 or pointer2:
            # pointer1 will iterate to the entire list to get how many elements we have
            if pointer1:
                cont1 += 1
                pointer1 = pointer1.next
            else:
                # pointer2 will stop at the position to delete
                if cont2 == cont1 - n:
                    if not prev:
                        head = pointer2.next
                    else:
                        prev.next = pointer2.next
                    break
                cont2 += 1
                prev = pointer2
                pointer2 = pointer2.next
        
    return head

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
#     removeNthFromEnd(head, 1)
#     print(head.to_string())
#     # deleteNode(head.search(2))
#     # print(head.to_string())

# main()


