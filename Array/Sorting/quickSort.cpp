#include <iostream>
using namespace std;

int partition(int arr[], int l, int h)
{
    int pivot = arr[l];
    int i = l, j = h;

    while (i < j)
    {
        do
        {
            i++;
        } while (arr[i] <= pivot);
        do
        {
            j--;
        } while (arr[j] > pivot);

        if (i < j)
            swap(arr[i], arr[j]);
    }
    swap(arr[l], arr[j]);
    return j;
}

void Quicksort(int arr[], int l, int h)
{
    int pivot;
    if (l < h)
    {
        pivot = partition(arr, l, h);
        Quicksort(arr, l, pivot);
        Quicksort(arr, pivot + 1, h);
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
    int arr[] = {4, 3, 2, 1, 6};
    printArray(arr, 5);
    Quicksort(arr, 0, 5);
    printArray(arr, 5);
    return 0;
}