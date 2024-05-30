#include <bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int> &nums)
{
    int n = nums.size();
    vector<int> product(n, 1);
    int postfix = 1;
    int prefix = 1;
    product[0] = 1;
    for (int i = 1; i < n; i++)
    {

        prefix *= nums[i - 1];
        product[i] = prefix;
    }
    for (int i = n - 1; i > 0; i--)
    {
        postfix *= nums[i];
        product[i - 1] = product[i - 1] * postfix;
    }
    return product;
}
int main()
{
    return 0;
}