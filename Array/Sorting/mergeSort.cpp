#include <iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int leftSubArray[n1], rightSubArray[n2];

    for (int i = 0; i < n1; i++)
    {
        leftSubArray[i] = arr[left + i];
    }

    for (int i = 0; i < n2; i++)
    {
        rightSubArray[i] = arr[mid + 1 + i];
    }
}

void mergeSort(int arr[], int begin, int end)
{
    if (begin < end)
    {
        int mid = (begin + end) / 2;
        mergeSort(arr, begin, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, begin, mid, end);
    }
}

int main()
{
    return 0;
}