#include <bits/stdc++.h>
using namespace std;
bool linearSearch(int arr[], int n, int k)
{
    if (n == 0)
        return false;

    if (arr[0] == k)
        return true;
    else
    {
        return linearSearch(arr + 1, n - 1, k);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int k = 2;
    bool ans = linearSearch(arr, 5, k);
    if (ans)
        cout << "Present" << endl;
    else
        cout << "Not Present" << endl;
    return 0;
}