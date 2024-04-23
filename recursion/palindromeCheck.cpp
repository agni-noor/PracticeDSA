#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string &str, int s, int e)
{
    if (s >= e)
        return true;
    if (str[s] != str[e])
        return false;
    s++;
    e--;
    return checkPalindrome(str, s, e);
}

int main()
{
    string str;
    cin >> str;
    int size = str.size() - 1;
    if (checkPalindrome(str, 0, size))
        cout << "Palindrome" << endl;
    else
        cout << "Not a Palindorme" << endl;

    return 0;
}