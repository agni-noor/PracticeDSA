#include <bits/stdc++.h>
using namespace std;

void printDigit(int n, string arr[])
{
    if (n == 0)
        return;

    printDigit(n / 10, arr);
    int digit = n % 10;
    cout << arr[digit] << endl;
}

int main()
{
    int n;
    cin >> n;
    string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    printDigit(n, arr);
}