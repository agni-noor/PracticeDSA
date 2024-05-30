#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int> &nums)
{
    set<int> hashset;
    for (int i = 0; i < nums.size(); i++)
    {
        if (hashset.find(nums[i]) == hashset.end())
        {
            hashset.insert(nums[i]);
        }
        else
        {
            return true;
        }
    }
    return false;
}
int main()
{
    return 0;
}