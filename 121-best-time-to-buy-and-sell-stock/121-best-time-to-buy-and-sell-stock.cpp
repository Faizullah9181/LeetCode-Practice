class Solution
{
    public:
        int maxProfit(vector<int> &prices)
        {
            int min_price = prices[0];

            int profit = 0;

            for (int i = 1; i < prices.size(); i++)
            {

               

                profit = max(profit, prices[i] - min_price);
                
                 min_price = min(prices[i], min_price);
            }

            return profit;
        }
};