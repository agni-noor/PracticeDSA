// maps store in key,value pairs
// maps store in sorted order of keys except unordered maps --> implemented using reb black trees
// every element is a pair in map
// keys ar eunique

// declare a map of int,string pair
// write function to print map

#include <bits/stdc++.h>
using namespace std;

void printMap(map<int, string> m)
{
    for (auto v : m)
    {
        cout << v.first << " " << v.second << endl;
    }
}
int main()
{

    map<int, string> m;
    m[1] = "abc"; // Time complexity for insertion in map : logn

    // if the key is a string, then the time complexity would be string.size*logn
    m[5] = "def";
    m[2] = "bce";
    m[9] = "xyz";

    auto it = m.find(5); // logn
    cout << it->first << " " << it->second << endl;
    m.erase(2);
    printMap(m);
    m.erase(it); // logn
    printMap(m);
    m.clear();
    return 0;
}