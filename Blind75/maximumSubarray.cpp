#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    int maxSub = nums[0];
    int curSum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (curSum < 0)
            curSum = 0;
        curSum += nums[i];
        maxSub = max(maxSub, curSum);
    }
    return maxSub;
}

int main()
{
    return 0;
}