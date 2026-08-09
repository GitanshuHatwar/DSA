#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class List
{
    Node *head;
    Node *tail;

public:
    List()
    {
        head = tail = NULL;
    }

    void push_front(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_front()
    {
        if (head == NULL)
        {
            return;
        }
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    void pop_back()
    {
        if (head == NULL)
        {
            return;
        }
        Node *temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    void insert(int val, int post)
    {
        if (post < 0)
        {
            cout << "invalid pos\n";
            return;
        }

        if (post == 0)
        {
            push_front(val);
            return;
        }
        Node *temp = head;
        for (int i = 0; i < post - 1; i++)
        {
            if (temp == NULL)
            {
                cout << "invalid pos\n";
                return;
            }
            temp = temp->next;
        }
        Node *newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }
    void search(int val)
    {
        Node *temp = head;
        int idx = 1;
        while (temp != NULL)
        {
            if (temp->data == val)
            {
                cout << "value found  at " << idx << endl;
            }
            temp = temp->next;
            idx++;
        }
        
        return;
    }
    void printLL()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    List ll;

    ll.push_front(69);
    ll.push_front(33);
    ll.push_front(404);
    ll.push_back(3393);
    ll.push_front(1);
    ll.printLL();

    cout << "Removing the First element" << endl;
    ll.pop_front();
    ll.printLL();

    cout << "Removing the Last element " << endl;
    ll.pop_back();
    ll.printLL();

    cout << "Insert  position 4" << endl;
    ll.insert(6796, 2);
    ll.printLL();

    ll.search(69);

    return 0;
}