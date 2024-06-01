#include <bits/stdc++.h>
using namespace std;

int maxProduct(vector<int> &nums)
{
    int res = *max_element(nums.begin(), nums.end());
    int curMin = 1;
    int curMax = 1;

    for (auto val : nums)
    {
        if (val == 0)
        {
            curMin = 1;
            curMax = 1;
            continue;
        }
        int temp = curMax;
        curMax = max({val * curMax, val * curMin, val});
        curMin = min({val * temp, val * curMin, val});
        res = max(res, curMax);
    }
    return res;
}

int main()
{
    return 0;
}