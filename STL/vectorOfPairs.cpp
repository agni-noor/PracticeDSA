#include <bits/stdc++.h>
using namespace std;

//  print a vector of pairs
void printVec(vector<pair<int, int>> &v)
{
    int size = v.size();
    cout << "Size" << size << endl;
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
}

int main()
{
    int takeinput = 1;
    vector<pair<int, int>> v1 = {{1, 2}, {2, 3}, {3, 4}};
    printVec(v1);
    // Take vector input
    int n;
    cout << "Number of items in vector" << endl;
    vector<pair<int, int>> v2;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cout << "Enter firdt value of pair: " << endl;
        cin >> x;
        cout << endl;
        cout << "Enter second value of pair: " << endl;
        cin >> y;
        cout << endl;
        v2.push_back(make_pair(x, y));
    }
    printVec(v2);
}