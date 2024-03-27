#include <bits/stdc++.h>
using namespace std;

// it+1--> works only for contiguous data structures
//     --> does not work for non-contiguous data structures like maps and sets as it+1 points to the next contiguous location
// use it++ instead, it updates to the next iterator
int main()
{
    // vector<int> v = {1, 2, 3, 4, 5};
    // vector<int>::iterator it;
    // for (it = v.begin(); it != v.end(); it++)
    // {
    //     cout << (*it) << endl;
    // }

    // iterating over vector of pairs

    vector<pair<int, int>> v_p = {{1, 2}, {2, 3}, {3, 4}};
    vector<pair<int, int>>::iterator it;
    for (it = v_p.begin(); it != v_p.end(); it++)
    {
        // cout << (*it).first << " " << (*it).second << endl;

        cout << it->first << " " << it->second << endl;

        // it->first <=> (*it).first
        // Both syntaxes denote the same thing but -> is more prevalent
    }
}