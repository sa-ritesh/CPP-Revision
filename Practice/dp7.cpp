#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int d)
    {
        data = d;
        next = nullptr;
    }
};
void insertAtTail(node *&head, int d)
{
    if (head == nullptr)
    {
        head = new node(d);
        return;
    }
    node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = new node(d);
    return;
}
void print(node *head)
{
    node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
}
void reverse(node *&head)
{
    node *p = nullptr;
    node *c = head;
    node *n;
    while (c != nullptr)
    {
        n = c->next;
        c->next = p;
        p = c;
        c = n;
    }
    head = p;
    return;
}
node *mainHead = nullptr;
node *reverseRec(node *&head)
{
    if (head->next == nullptr)
    {
        mainHead = head;
        return head;
    }
    node *prevHead = head;
    node *smallHead = reverseRec(head->next);
    smallHead->next = prevHead;
    prevHead->next = nullptr;
    return prevHead;
}
int main()
{
    node *head = nullptr;
    int n;
    cin >> n;
    while (n--)
    {
        int a;
        cin >> a;
        insertAtTail(head, a);
    }
    print(head);
    cout << endl;
    reverseRec(head);
    print(mainHead);
    return 0;
}