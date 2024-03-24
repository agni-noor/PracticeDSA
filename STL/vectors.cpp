// dynamic arrays
#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v;
    v.push_back(3);
    v.push_back(2);
    printVec(v);
    v.pop_back();
    printVec(v);
    vector<int> &v1 = v;
    v1.push_back(5);
    printVec(v);
    // Initialize a vector with size 5 and every slot has the value 3
    vector<int> v2(5, 3);
    printVec(v2);
}