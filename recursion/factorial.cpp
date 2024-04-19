#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if (n == 0)
        return 1;

    int small_problem = factorial(n - 1);
    int big_problem = n * factorial(n - 1);
    return big_problem;
}

int main()
{
    int n;
    cin >> n;
    cout << factorial(n);
}