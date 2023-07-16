#include <iostream>

struct ListNode 
{
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next{nullptr} { }
};

void append(ListNode* head, int x) 
{
    while (head->next) 
        head = head->next;
    
    ListNode* new_node = new ListNode(x);
    head->next = new_node;
}

void print(ListNode* head) 
{
    while (head) 
    {
        std::cout << head->val << " -> ";
        head = head->next;
    } 
    std::cout << '\n';
}

void clean(ListNode* head) 
{
    while (head)
    {
        ListNode *remove = head;
        head = head->next;
        delete remove;
    }
}

ListNode* find(ListNode* head, int x)
{
    while(head) 
    {
        if (head->val == x) 
            return head;
        head = head->next;       
    }

    return nullptr;
}

void deleteNode(ListNode* node) 
{
    // By doing *node, we are accesing to the node that is pointed by node
    // doing *node->next we are copying the values of the next node to the 
    // current *node, but we have memory leaks with this approach
    // *node = *node->next;

    // This is the same but without memory leaks, remember that *node are the
    // values of the node that points to, esta copiando los valores
    ListNode* next = node->next;
    *node = *next;
    delete next;
}

int main()
{
    ListNode* head = new ListNode(1); 
    append(head, 2);
    append(head, 3);
    append(head, 4);

    ListNode* toRemove = find(head, 3);

    print(head);
    deleteNode(toRemove);
    print(head);

    clean(head);
    return 0;
}