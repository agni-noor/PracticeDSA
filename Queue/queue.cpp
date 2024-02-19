#include <iostream>
using namespace std;

class Queue
{
private:
    int front;
    int rear;
    int arr[5];

public:
    Queue()
    {
        front = -1;
        rear = -1;
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
    }

    bool isEmpty()
    {
        if (front == -1 && rear == -1)
        {
            return true;
        }
        else
            return false;
    }

    bool isFull()
    {
        if (rear == 4)
        {
            return true;
        }
        else
            return false;
    }

    void enqueue(int value)
    {
        if (isFull())
        {
            cout << "Queue is full" << endl;
            return;
        }
        else if (isEmpty())
        {
            rear = front = 0;
            arr[rear] = value;
        }
        else
        {
            rear++;
            arr[rear] = value;
        }
    }

    int dequeue()
    {
        int x;
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return 0;
        }
        else if (rear == front)
        {
            x = arr[front];
            arr[front] = 0;
            rear = front = -1;
            return x;
        }
        else
        {
            x = arr[front];
            arr[front] = 0;
            front++;
            return x;
        }
    }

    int count()
    {
        return (rear - front + 1);
    }
    void display()
    {
        cout << "All the stack elements are displayed" << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << arr[i] << "  ";
        }
        cout << endl;
    }
};

int main()
{
    Queue q1;
    int option, value;
    do
    {
        cout << "What operation do you want to perform? Select option number. Enter 0 to Exit." << endl;
        cout << "1. enqueue()" << endl;
        cout << "2. dequeue()" << endl;
        cout << "3. isEmpty()" << endl;
        cout << "4. isFull()" << endl;
        cout << "5. count()" << endl;
        cout << "6. display()" << endl;
        cout << "7. Clear Screen" << endl;

        cin >> option;
        switch (option)
        {
        case 0:
            break;
        case 1:
            cout << "Enter an item to enqueue to the queue:" << endl;
            cin >> value;
            q1.enqueue(value);
            break;

        case 2:
            cout << "Dequeue function called - dequeued value :" << q1.dequeue() << endl;
            break;

        case 3:
            if (q1.isEmpty())
            {
                cout << "The queue is empty" << endl;
            }
            else
                cout << "The queue is not empty" << endl;

            break;

        case 4:
            if (q1.isFull())
            {
                cout << "Queue is full" << endl;
            }
            else
                cout << "Queue is not full" << endl;
            break;

        case 5:
            cout << "Total number of elements present in the queue:" << q1.count() << endl;
            break;

        case 6:
            cout << "Display function called" << endl;
            q1.display();
            break;

        case 7:
            system("cls");
            break;

        default:
            cout << "Enter proper option number" << endl;
            break;
        }

    } while (option != 0);

    return 0;
}