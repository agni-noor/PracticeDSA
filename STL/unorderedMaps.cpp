// maps vs unordered maps
// 1. in-built implementation-->maps use tree, umaps use hash table
// 2. Time Complexity --> O(1) for umaps insertion
// 3. Valid key datatype
// multimap --> similar to map but maps have unique keys, multimaps don't
// e.g. if a duplicate key is entered in map, it updates the key value but a multimap creates another node with the duplicate value
#include <bits/stdc++.h>
using namespace std;

void printMap(unordered_map<int, string> &m)
{
    for (auto val : m)
    {
        cout << val.first << " " << val.second << endl;
    }
}
int main()
{
    unordered_map<int, string> m;
    m[3] = "abc";
    m[2] = "wer";
    m[5] = "erf";
    m[6];
    printMap(m);

    auto it = m.find(2);
    if (it != m.end())
    {
        m.erase(it);
    }
    printMap(m);
    return 0;
}
