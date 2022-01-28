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

ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* currentNode = head;
    int counter = 0;

    while(currentNode != nullptr) {
        currentNode = currentNode->next;
        ++counter;
    }

    ListNode* prev = nullptr;
    currentNode = head;
    // We can know the exact position by knowing how many
    // elements are in our list minus n.
    int pos = counter-n;

    // Delete first position.
    if(pos == 0) {
        head = currentNode->next;
        delete currentNode;
        return head;
    }

    while(pos > 0) {
        prev = currentNode;
        currentNode = currentNode->next;
        --pos;
    }

    // In order to delete one node, we need the previous
    // to point to the next element of the node to be eliminated.
    prev->next = currentNode->next;
    delete currentNode;
    return head;
}

int main()
{
    ListNode *list = new ListNode(1);
    insert(list, 2);
    // insert(list, 3);
    // insert(list, 4);
    // insert(list, 5);

    list = removeNthFromEnd(list, 1);
    print(list);
    freeList(list);

    return 0;
}
