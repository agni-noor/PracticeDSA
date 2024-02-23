/*
appendNode()
prependNode()
insertNodeAfter()
insertNodeByKey()
updateNodeByKey()
*/

#include <iostream>
using namespace std;

class Node
{
public:
    int key;
    int data;
    Node *next;

    Node()
    {
        key = 0;
        data = 0;
        next = NULL;
    }

    Node(int k, int d)
    {
        key = k;
        data = d;
    }
};

class SinglyLinkedList
{
public:
    Node *head;

    SinglyLinkedList()
    {
        head = NULL;
    }

    SinglyLinkedList(Node *n)
    {
        head = n;
    }

    // Check if node already exists using key value

    Node *nodeExists(int k)
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
        if (nodeExists(n->key) != NULL)
        {
            cout << "Node already exists with key value" << n->key << "Append another node with different key value" << endl;
        }
        else
        {
            if (head == NULL)
            {
                head = n;
                cout << "Node Appended" << endl;
            }
            else
            {
                Node *ptr = head;
                while (ptr->next != NULL)
                {
                    ptr = ptr->next;
                }
                ptr->next = n;
                cout << "Node Appended" << endl;
            }
        }
    }

    void prependNode(Node *n)
    {
        if (nodeExists(n->key) != NULL)
        {

            cout << "Node already exists with key value" << n->key << "Append another node with different key value" << endl;
        }
        else
        {

            n->next = head;
            head = n;
            cout << "Node Prepended" << endl;
        }
    }

    // Insert a node after a particular key

    void insertNodeAfter(int k, Node *n)
    {
        if (nodeExists(n->key) != NULL)
        {

            cout << "Node already exists with key value" << n->key << "Append another node with different key value" << endl;
        }
        else
        {
            Node *ptr = nodeExists(k);
            if (ptr == NULL)
            {

                cout << "The key " << k << " does not exist. Enter a valid key." << endl;
            }
            else
            {

                n->next = ptr->next;
                ptr->next = n;
                cout << "Node Inserted" << endl;
            }
        }
    }

    void deleteNodeByKey(int k)
    {
        if (head == NULL)
        {
            cout << "Singly linked list already empty. Can't delete" << endl;
        }
        else
        {
            if (nodeExists(k) == NULL)
            {
                cout << "The key does not exist" << endl;
            }
            else if (head->key == k)
            {
                head = head->next;
                cout << "Node UNLINKED with keys value" << k << endl;
            }
            else
            {
                Node *prevptr = head;
                Node *currentptr = head->next;
                while (currentptr->key != k)
                {
                    prevptr = prevptr->next;
                    currentptr = currentptr->next;
                }
                prevptr->next = currentptr->next;
                cout << "Node unlinked with key's value : " << k << endl;
            }
        }
    }

    // Update node by key

    void updateNodeByKey(int k, int d)
    {
        Node *update = nodeExists(k);
        if (update == NULL)
        {
            cout << "The key does not exist." << endl;
        }
        else
        {
            update->data = d;
            cout << "Node update successfully" << endl;
        }
    }

    // print the linked list
    void printList()
    {
        if (head == NULL)
        {
            cout << "List is empty" << endl;
        }
        else
        {

            Node *ptr = head;
            cout << "The elements in the linked list:" << endl;

            while (ptr != NULL)
            {
                cout << "Key: " << ptr->key << ", Data: " << ptr->data << endl;
                ptr = ptr->next;
            }
        }
    }
};

int main()
{
    // Memory is allocated on the stack for SinglyLinkedList
    SinglyLinkedList s;
    int option;
    int key1, data1, k1;

    do
    {
        cout << "What operations do you want to perform? Selet optiom number. Enter 0 to exit." << endl;
        cout << "1. appendNode()" << endl;
        cout << "2. prependNode()" << endl;
        cout << "3. insertNodeAfter()" << endl;
        cout << "4. deleteNodeByKey()" << endl;
        cout << "5. updateNodeBykey()" << endl;
        cout << "6. print()" << endl;
        cout << "7. Clear Screen" << endl;

        cin >> option;

        // Memory is allocated on the heap for Node as new keyword has been used so that it can be accessed from wherever in the program
        Node *n1 = new Node();

        switch (option)
        {
        case 0:
            break;

        case 1:
            cout << "Append Node operation \n Enter key and data of the node to be appended" << endl;
            cin >> key1;
            cin >> data1;
            n1->key = key1;
            n1->data = data1;
            s.appendNode(n1);
            break;

        case 2:
            cout << "Prepend Node Operation \n Enter key and data of the node to be prepended" << endl;
            cin >> key1;
            cin >> data1;
            n1->key = key1;
            n1->data = data1;
            s.prependNode(n1);
            break;

        case 3:
            cout << "Insert node after key operation" << endl;
            cout << "Enter key after which node is to be appended" << endl;
            cin >> k1;
            cout << "Enter key and data of the node to be appended" << endl;
            cin >> key1, data1;
            n1->key = key1;
            n1->data = data1;
            s.insertNodeAfter(k1, n1);
            break;
        case 4:
            cout << "Delete node by key operation" << endl;
            cout << "Enter key of the node to be deleted" << endl;
            cin >> k1;
            s.deleteNodeByKey(k1);
            break;

        case 5:
            cout << "Update Node By Key Operation" << endl;
            cout << "Enter the key and updated value of the node" << endl;
            cin >> key1;
            cin >> data1;
            s.updateNodeByKey(key1, data1);
            break;

        case 6:
            s.printList();
            break;

        case 7:
            system("cls");
            break;

        default:
            cout << "Enter proper option number" << endl;
            break;
        }

    } while (option != 0);
    // random change
    return 0;
}