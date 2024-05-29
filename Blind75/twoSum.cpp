#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> hashmap;
    vector<int> twosum;

    for (int i = 0; i < nums.size(); ++i)
    {
        int search = target - nums[i];
        auto it = hashmap.find(search);
        if (it == hashmap.end())
        {
            hashmap.insert({nums[i], i});
        }
        else
        {
            twosum.push_back(it->second);
            twosum.push_back(i);
        }
    }
    return twosum;
}

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);
    for (auto val : result)
    {
        cout << val;
    }
    return 0;
}