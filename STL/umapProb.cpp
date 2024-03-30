/*Given N strings and Q queries
In each query, you are given a string
Print frequency of the String
*/

#include <bits/stdc++.h>
using namespace std;

void printMap(unordered_map<string, int> &umap)
{
    for (auto val : umap)
    {
        cout << val.first << " " << val.second << endl;
    }
}

int main()
{

    int N;
    cout << "Enter number of queries" << endl;
    cin >> N;
    unordered_map<string, int> umap;
    for (int i = 0; i < N; i++)
    {
        string s;
        cout << "Enter String" << endl;
        cin >> s;
        umap[s]++;
    }
    printMap(umap);
    return 0;
}