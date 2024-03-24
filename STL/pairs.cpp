#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, string> p;
    // p = make_pair(1, "abc");
    p = {1, "abc"};
    cout << p.first << " " << p.second << endl;
    pair<int, string> &p1 = p;
    p1.first = 3;
    cout << p.first << " " << p.second << endl;
    int a1[] = {1, 2, 3};
    int a2[] = {3, 4, 5};

    pair<int, int> p_arr[3];
    p_arr[0] = {1, 2};
    p_arr[1] = {2, 3};
    p_arr[2] = {3, 4};
    swap(p_arr[0], p_arr[2]);
    for (int i = 0; i < 3; i++)
    {
        cout << p_arr[i].first << " " << p_arr[i].second << endl;
    }
}