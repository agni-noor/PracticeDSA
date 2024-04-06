#include <bits/stdc++.h>
using namespace std;

// Set stores unique elements like maps
void printSet(set<string> &s)
{
    for (string v : s)
    {
        cout << v << endl;
    }
}

int main()
{
    set<string> s;
    s.insert("def");
    s.insert("abc");
    s.insert("ghi");

    auto it = s.find("abc");
    printSet(s);

    return 0;
}