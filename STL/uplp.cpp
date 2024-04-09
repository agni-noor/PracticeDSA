#include <bits/stdc++.h>
using namespace std;

// Upper bound returns the greater number of the passed number
// Lower bound returns the numberif present, greater if not present
int main()
{
    int n;

    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    auto it = upper_bound(v.begin(), v.end(), 5);
    if (it == v.end())
    {
        cout << "Not Found" << endl;
        return 0;
    }
    cout << (*it) << endl;

    set<int> s = {1, 2, 3, 4};
    // If I have to find lower/upper bound of maps and sets
    // Don't use
    auto it = lower_bound(s.begin(), s.end(), rand()); // because time complexity--> n
    // Instead use
    auto it = s.lower_bound(rand()); // time complexiity --> logn

    return 0;
}