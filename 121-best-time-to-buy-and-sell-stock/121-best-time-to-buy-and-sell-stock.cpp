class Solution
{
    public:
        int maxProfit(vector<int> &prices)
        {
            int min_price = INT_MAX;

            int profit = 0;

            for (int i = 0; i < prices.size(); i++)
            {

               

                profit = max(profit, prices[i] - min_price);
                
                 min_price = min(prices[i], min_price);
            }

            return profit;
        }
};