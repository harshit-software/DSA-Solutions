// Method 1
class Solution
{
public:
    int buyChoco(vector<int> &prices, int money)
    {
        sort(prices.begin(), prices.end());
        int left = money - prices[0] - prices[1];
        if (left >= 0)
            return left;
        return money;
    }
};

// Method 2
class Solution
{
public:
    int buyChoco(vector<int> &prices, int money)
    {
        int fmin = INT_MAX, smin = INT_MAX;
        for (auto it : prices)
        {
            if (it < fmin)
            {
                smin = fmin;
                fmin = it;
            }
            else if (it < smin)
            {
                smin = it;
            }
        }
        int rem = money - fmin - smin;
        if (rem >= 0)
            return rem;
        return money;
    }
};