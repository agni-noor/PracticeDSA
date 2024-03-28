// Range based loops
// auto keyword --> dynamically assumes data type
// additional loops -->++i

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4};

    // Range based loop
    for (int value : v)
    {
        cout << value << endl;
    }
    // pass by reference
    for (auto &value : v)
    {
        cout << value << endl;
    }

    return 0;
}