#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<pair<string, string>, vector<int>> m;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string fn, ln;
        int cnt;
        cin >> fn >> ln >> cnt;
        for (int j = 0; j < cnt; j++)
        {
            int v;
            cin >> v;
            m[{fn, ln}].push_back(v);
        }
    }

    for (auto &val : m)
    {
        auto &full_name = val.first;
        auto &list = val.second;
        cout << full_name.first << " " << full_name.second << endl;
        for (auto &element : list)
        {
            cout << element << " ";
        }
        cout << endl;
    }
    return 0;
}