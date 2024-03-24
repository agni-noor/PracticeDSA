#include <iostream>
using namespace std;

void merge(int arr[], int begin, int mid, int end)
{
    int leftArr = mid - begin + 1;
    int rightArr = end - mid;

    auto *leftSubArray = new int[leftArr], *rightSubArray = new int[rightArr];

    for (int i = 0; i < leftArr; i++)
    {
        leftSubArray[i] = arr[begin + i];
    }
    for (int i = 0; i < rightArr; i++)
    {
        rightSubArray[i] = arr[mid + 1 + i];
    }

    int leftArrIndex = 0, rightArrIndex = 0, mergedArrIndex = begin;

    while (leftArrIndex < leftArr && rightArrIndex < rightArr)
    {
        if (leftSubArray[leftArrIndex] <= rightSubArray[rightArrIndex])
            arr[mergedArrIndex++] = leftSubArray[leftArrIndex++];
        else
            arr[mergedArrIndex++] = rightSubArray[rightArrIndex++];
    }

    for (; leftArrIndex < leftArr; leftArrIndex++)
    {
        arr[mergedArrIndex++] = leftSubArray[leftArrIndex];
    }
    for (; rightArrIndex < rightArr; rightArrIndex++)
    {
        arr[mergedArrIndex++] = rightSubArray[rightArrIndex];
    }

    delete[] leftSubArray;
    delete[] rightSubArray;
}

void mergeSort(int arr[], int begin, int end)
{
    if (begin >= end)
        return;
    else
    {
        int mid = (begin + end) / 2;
        mergeSort(arr, begin, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, begin, mid, end);
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
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, size);
    mergeSort(arr, 0, size - 1);
    printArray(arr, size);
    return 0;
}