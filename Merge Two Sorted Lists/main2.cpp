#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void insert(ListNode* list, int val)
{
    ListNode* current = list;
    while (current->next)
        current = current->next;

    current->next = new ListNode(val);
}

void delete_list(ListNode* list)
{
    while (list)
    {
        ListNode* aux = list;
        list = list->next;
        delete aux;
        aux = nullptr;
    }
}

void print(ListNode* list)
{
    ListNode* current = list;
    while (current)
    {
        cout << current->val << " ";
        current = current->next;
    }
    cout << '\n';
}

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
{
    ListNode head = ListNode();
    ListNode* tail = &head;

    // Until they aren't null.
    while (list1 and list2)
    {
        if (list1->val < list2->val)
        {
            tail->next = list1;
            list1 = list1->next;
        } else {
            tail->next = list2;
            list2 = list2->next;
        }
        tail = tail->next;
    }

    // Point to the rest of elements if one list finish before other list.
    if (list1)
        tail->next = list1;
    if (list2)
        tail->next = list2;

    return head.next;
}

int main()
{
    ifstream input("input.txt");

    string txt;
    while (getline(input, txt))
    {
        ListNode* list1 = new ListNode;
        ListNode* list2 = new ListNode;
        string word;
        int num = 0;

        // Split list1 with space as delimiter.
        stringstream ss(txt);
        while (ss >> word)
        {
            num = stoi(word);
            insert(list1, num);
        }

        // Read second line.
        getline(input, txt);

        // Split list2 with space as delimiter.
        stringstream ss2(txt);
        while (ss2 >> word)
        {
            num = stoi(word);
            insert(list2, num);
        }

        list1 = list1->next;
        list2 = list2->next;

        list1 = mergeTwoLists(list1, list2);
        print(list1);

        delete_list(list1);
    }

    return 0;
}
