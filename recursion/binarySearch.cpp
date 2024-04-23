#include <bits/stdc++.h>
using namespace std;

bool binarySearch(int arr[], int s, int e, int key)
{
    if (s > e)
        return false;

    int mid = s + (e - s) / 2;
    if (arr[mid] == key)
        return true;
    if (key > arr[mid])
    {
        return binarySearch(arr, mid + 1, e, key);
    }
    else
    {
        return binarySearch(arr, s, mid - 1, key);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int key = 10;
    if (binarySearch(arr, 0, 5, key))
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;
    return 0;
}