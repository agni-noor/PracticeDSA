#include <bits/stdc++.h>
using namespace std;

void reverseString(string &str, int s, int e)
{
    if (s >= e)
        return;
    swap(str[s], str[e]);
    s++;
    e--;
    return reverseString(str, s, e);
}

int main()
{
    string str;
    cin >> str;
    int size = str.size();
    reverseString(str, 0, size - 1);
    cout << str;
    return 0;
}