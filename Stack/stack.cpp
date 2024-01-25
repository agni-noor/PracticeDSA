#include <iostream>
#include <string>
using namespace std;
class Stack
{
private:
    int top;
    int arr[5];

public:
    Stack()
    {
        top = -1;
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
            return false;
    }

    bool isFull()
    {
        if (top == 4)
        {
            return true;
        }
        else
            return false;
    }

    void push(int val)
    {
        if (isFull())
        {
            cout << "Stack Overflow" << endl;
        }
        else
        {
            top++;
            arr[top] = val;
        }
    }

    int pop()
    {
        int popvalue;
        if (isEmpty())
        {
            cout << "Stack Underflow" << endl;
            return 0;
        }
        else
        {
            popvalue = arr[top];
            ;
            arr[top] = 0;
            top--;
            return popvalue;
        }
    }

    int count()
    {
        return (top + 1);
    }

    int peek(int pos)
    {
        if (isEmpty())
        {
            cout << "Stack Underflow" << endl;
            return 0;
        }
        else
            return arr[pos];
    }
    void change(int pos, int val)
    {
        arr[pos] = val;
        cout << "Value changed at location" << endl;
    }

    void display()
    {
        cout << "All the stack elements are displayed" << endl;
        for (int i = 0; i <= top; i++)
        {
            cout << arr[i] << "  ";
        }
    }
};

int main()
{

    return 0;
}