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
        if (rear == sizeof(arr) - 1)
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
        if (isEmpty)
        {
            cout << "Queue is empty" << endl;
            return;
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
};