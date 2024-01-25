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
        cout << endl;
    }
};

int main()
{
    Stack s1;
    int option, position, value;
    do
    {
        cout << "What operation do you want to perform? Select option number. Enter 0 to Exit." << endl;
        cout << "1. push()" << endl;
        cout << "2. pop()" << endl;
        cout << "3. isEmpty()" << endl;
        cout << "4. isFull()" << endl;
        cout << "5. peek()" << endl;
        cout << "6. count()" << endl;
        cout << "7. change()" << endl;
        cout << "8. display()" << endl;
        cout << "9. Clear Screen" << endl;

        cin >> option;
        switch (option)
        {
        case 0:
            break;
        case 1:
            cout << "Enter an item to push to the stack:" << endl;
            cin >> value;
            s1.push(value);
            break;

        case 2:
            cout << "Pop function called - popped value :" << s1.pop() << endl;
            break;

        case 3:
            if (s1.isEmpty())
            {
                cout << "The stack is empty" << endl;
            }
            else
                cout << "The stack is not empty" << endl;

            break;

        case 4:
            if (s1.isFull())
            {
                cout << "Stack is full" << endl;
            }
            else
                cout << "Stack is not full" << endl;
            break;

        case 5:
            cout << "Enter position to peek at:" << endl;
            cin >> position;
            cout << "The value at the given position is : " << s1.peek(position) << endl;
            break;

        case 6:
            cout << "Total number of elements present in the stack:" << s1.count() << endl;
            break;

        case 7:
            cout << "Enter the position that is to be changed" << endl;
            cin >> position;

            cout << "Enter the changed value:" << endl;
            cin >> value;
            s1.change(position, value);

            break;

        case 8:
            cout << "Display function called" << endl;
            s1.display();
            break;

        case 9:
            system("cls");
            break;

        default:
            cout << "Enter proper option number" << endl;
            break;
        }

    } while (option != 0);

    return 0;
}