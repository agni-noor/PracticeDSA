#include <bits/stdc++.h>
using namespace std;

// return false if needs to swap, true otherwise

bool comparator(pair<int, int> a, pair<int, int> b)
{
    if (a.first != b.first)
        return a.first < b.first;

    return a.second > b.second;
}

int main()
{
    int n;
    cin >> n;

    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end(), comparator);

    // sort(v.begin(), v.end(), greater<pair<int, int>>());

    for (int i = 0; i < n; i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }

    return 0;
}