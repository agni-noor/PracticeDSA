#include <bits/stdc++.h>
using namespace std;

// all_of, non_of, any_of --> returns true/false, checks a condition for elements without looping
// LAMBDA functions: **** --> third parameter of of algos, small synta for writing temporary functions
// syntax -->[](var){return value;}

int main()
{
    vector<int> v = {2, 3, 5};
    // Lambda function
    cout << [](int x)
    { return x + 2; }(2)
         << endl;

    auto sum = [](int x, int y)
    { return x + y; };
    cout << sum(2, 3) << endl;

    // all_of
    // true if condition is true for all values

    cout << all_of(v.begin(), v.end(), [](int x)
                   { return x > 0; })
         << endl;
    // any_of
    // returns true if condition is true for any value

    // none_of
    // if all of the elements retuen false, then return true
    return 0;
}