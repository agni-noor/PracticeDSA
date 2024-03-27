#include <bits/stdc++.h>
using namespace std;

void printVec(vector<vector<int>> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << "Vector " << i << endl;
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    vector<vector<int>> v;
    cout << "Enter the number of vectors: " << endl;
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        // vector<int> temp;
        int n;
        cout << "Enter number of elements" << endl;
        cin >> n;
        v.push_back(vector<int>());
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            v[i].push_back(x);
            // temp.push_back(x);
        }
        // v.push_back(temp);
    }
    printVec(v);
}