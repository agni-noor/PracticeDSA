#include <iostream>
using namespace std;

class Node
{
public:
    int key;
    int data;
    Node *prev;
    Node *next;

    Node()
    {
        key = 0;
        data = 0;
        prev = NULL;
        next = NULL;
    }

    Node(int k, int d)
    {
        key = k;
        data = d;
    }
};

class DoublyLinkedList
{
public:
    Node *head;
    DoublyLinkedList()
    {
        head = NULL;
    }
    DoublyLinkedList(Node *n)
    {
        head = n;
    }

    Node *checkIfNodeExists(int k)
    {
        Node *temp = NULL;
        Node *ptr = head;
        while (ptr != NULL)
        {
            if (ptr->key == k)
            {
                temp = ptr;
            }
            ptr = ptr->next;
        }

        return temp;
    }

    void appendNode(Node *n)
    {
        Node *ptr = checkIfNodeExists(n->key);
        if (ptr != NULL)
        {
            cout << "Node already exists" << endl;
        }
        else
        {
            if (head == NULL)
            {
                head = n;
                cout << "Node appended at the start of linked list" << endl;
            }
            else
            {
                n->next = ptr->next;
                ptr->next->prev = n;
                ptr->next = n;
                n->prev = ptr;
                cout << "Node appende" << endl;
            }
        }
    }
};

int main()
{
    return 0;
}