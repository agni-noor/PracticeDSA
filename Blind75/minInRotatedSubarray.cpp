#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int> &nums)
{

    int m;
    int l = 0, r = nums.size() - 1;
    while (l < r)
    {
        if (nums[l] < nums[r])
        {
            return nums[l];
        }
        m = (l + r) / 2;
        if (nums[m] >= nums[l])
            l = m + 1;
        else
            r = m;
    }
    return nums[l];
}

int main()
{
    return 0;
}