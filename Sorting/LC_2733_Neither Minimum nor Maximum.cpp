// Method 1
class Solution
{
public:
    int findNonMinOrMax(vector<int> &nums)
    {
        int n = nums.size();
        if (n <= 2)
            return -1;
        sort(nums.begin(), nums.end());
        return nums[1];
    }
};

// Method 2
class Solution
{
public:
    int findNonMinOrMax(vector<int> &nums)
    {
        int n = nums.size();
        if (n <= 2)
            return -1;
        int maxE = INT_MIN, minE = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] > maxE)
                maxE = nums[i];
            if (nums[i] < minE)
                minE = nums[i];
        }
        for (auto it : nums)
        {
            if (it != maxE && it != minE)
                return it;
        }
        return -1;
    }
};