
// Selection sort in aschending order
#include <iostream>
using namespace std;

void insertionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (current < arr[j] && j >= 0)

        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, size);
    insertionSort(arr, size);
    cout << "Array sorted in ascending order using selection sort:" << endl;
    printArray(arr, size);
    return 0;
}