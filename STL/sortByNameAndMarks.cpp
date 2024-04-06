#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int N;
    cin >> N;
    map<int, multiset<string>> m;
    while (N--)
    {
        string name;
        int marks;
        cin >> name >> marks;
        m[marks].insert(name);
    }

    for (auto it = m.rbegin(); it != m.rend(); it++)
    {
        int m = it->first;
        for (auto &val : it->second)
        {
            cout << val << " " << m << endl;
        }
    }

    return 0;
}