#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
    if (prices.empty())
        return 0;

    int buy = 0, sell = 1, maxprofit = 0;
    while (sell < prices.size())
    {
        if (prices[buy] < prices[sell])
        {
            int profit = prices[sell] - prices[buy];
            maxprofit = max(profit, maxprofit);
        }
        else
        {
            buy = sell;
        }
        ++sell;
    }
    return maxprofit;
}

int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int result = maxProfit(prices);
    cout << result;
    return 0;
}
