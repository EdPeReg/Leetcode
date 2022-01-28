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
    while(currentNode->next != nullptr)
        currentNode = currentNode->next;

    currentNode->next = new ListNode(val);
}

void print(ListNode *head)
{
    while(head != nullptr)
    {
        if(head->val != 0)
            std::cout << head->val << ' ';
        head = head->next;
    }
}

void freeList(ListNode *head)
{
    ListNode *aux = nullptr;
    while(head != nullptr)
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

int main()
{
    ListNode *list = new ListNode(1);
    insert(list, 2);
    insert(list, 3);
    insert(list, 4);
    insert(list, 5);

    list = removeNthFromEnd(list, 1);
    print(list);
    freeList(list);

    return 0;
}
