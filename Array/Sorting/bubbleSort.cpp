#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int max_index = i;
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
                swap(&array[j], &array[j + 1]);
        }
    }
}

int main()
{

    int arr[] = {5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, size);
    bubbleSort(arr, size);
    printArray(arr, size);
    return 0;
}