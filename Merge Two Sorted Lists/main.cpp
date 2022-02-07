/* NOT PROUD OF THIS, REGIN FROM THE FUTURE, YOU NEED TO IMPROVE YOUR
 * POINTERS MANAGMENT, THERE ARE POINTERS ERRORS...
 * FOR LEETCODE DOESN'T MATTER BUT HERE, FIX THEM!!!.
 *
 * ALSO NOT PROUD OF MI ORIGINAL SOLUTION...*/

#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

void insert(ListNode *head, int val)
{
    ListNode *currentNode = head;
    // We are assuming that there will be always 1 element at the begining.
    while(currentNode->next)
        currentNode = currentNode->next;

    currentNode->next = new ListNode(val);
}

void print(ListNode *head)
{
    while(head)
    {
        if(head->val != 0)
            std::cout << head->val << ' ';
        head = head->next;
    }
}

void freeList(ListNode *head)
{
    ListNode *aux = nullptr;
    while(head)
    {
        aux = head;
        head = head->next;
        delete aux;
    }
}

/* O(N) */
ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* left = head;
    ListNode* right = head;

    // Set the right pointer in its correct position.
    for(int i = 0; i < n; ++i)
        right = right->next;

    // Last element will be deleted (first element).
    if(right == nullptr) {
        ListNode* aux = head;
        head = head->next;
        delete aux;
        return head;
    }

    // Any other position, move both pointers to keep the gap between them.
    while(right->next) {
        left = left->next;
        right = right->next;
    }

    ListNode* aux = left->next;
    left->next = aux->next;
    delete aux;

    return head;
}

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    // Manage empty list.
    // like this: [], []
    // [0], []
    // [], [0]
    if(list1 == nullptr and list2 == nullptr)
        return list1;
    if(list1 == nullptr)
        return list2;
    if(list2 == nullptr)
        return list1;

    // It seems here there are some memory leaks errors... :]
    ListNode* sorted = new ListNode;

    // Find the minimum element and insert that element in our sorted list.
    if(list1->val < list2->val) {
        insert(sorted, list1->val);
        list1 = list1->next;
    } else {
        insert(sorted, list2->val);
        list2 = list2->next;
    }

    // Our first element from sorted is not valid, asign
    // the next element which has the current value.
    // And do a backup because we want to return the head of our sorted list.
    ListNode* head = sorted = sorted->next;

    // Iterate in both list and check their values.
    while(list1 != nullptr and list2 != nullptr)
    {
        if(list1->val < list2->val)
        {
            insert(sorted, list1->val);
            list1 = list1->next;
        }
        else
        {
            insert(sorted, list2->val);
            list2 = list2->next;
        }
        sorted = sorted->next;
    }

    // There's the possiblity where one list has less
    // elements than the other list, if that's the case, just
    // point to the rest of the list that has more elements.
    if(list1 == nullptr) {
        sorted->next = list2;
    } else {
        sorted->next = list1;
    }

    return head;
}

int main()
{
    ListNode *list1 = nullptr;
    ListNode *list2 = new ListNode(0);

    list1 = mergeTwoLists(list1, list2);
    print(list1);

    // Only delete this lest because the pointers from list2 are merged with this list.
    freeList(list1);
    freeList(list2);

    return 0;
}
