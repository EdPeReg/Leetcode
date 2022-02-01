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

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode* currentNode = list1;

    while(currentNode->next != nullptr)
        currentNode = currentNode->next;

    currentNode->next = list2;

    ListNode* sortedList = nullptr;
    ListNode* aux = nullptr;
    ListNode* head = list1;
    ListNode* currentNode2 = list1;
    currentNode = list1;

    while(currentNode->next != nullptr) {
        while(currentNode2->next != nullptr) {
            if(currentNode->val > currentNode2->val) {
                ListNode* aux = new ListNode(currentNode2->val);  
                sortedList = aux;
            }
            currentNode2 = currentNode2->next;
        }
        currentNode2 = head;
        currentNode = currentNode->next;
    }

    return list1;
}

int main()
{
    ListNode *list1 = new ListNode(1);
    insert(list1, 2);
    insert(list1, 4);

    ListNode *list2 = new ListNode(1);
    insert(list2, 3);
    insert(list2, 4);

    list1 = mergeTwoLists(list1, list2);
    print(list1);

    // Only delete this lest because the pointers from list2 are merged with this list.
    freeList(list1);

    return 0;
}
