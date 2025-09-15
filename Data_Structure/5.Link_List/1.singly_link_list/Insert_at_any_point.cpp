#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_any_pos(Node *&head, int idx, int val)
{
    Node *newnode = new Node(val);
    Node *temp = head;
    for (int i = 1; i < idx; i++) // we count index from 0 just like array. (int i = 0; i < idx-1; i++)
    {
        temp = temp->next;
        if (temp == NULL) // if any one give a invalid index like more than the list size
        {
            return;
        }
    }
    newnode->next = temp->next;
    temp->next = newnode;
}
void print_link_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}
int main()
{

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->next = b;

    insert_at_any_pos(head, 10, 100);
    print_link_list(head);

    return 0;
}
