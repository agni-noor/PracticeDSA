#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int size)
{
    if (size == 0 || size == 1)
        return;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);
    }
    return bubbleSort(arr, size - 1);
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    bubbleSort(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i];
    }
    return 0;
}