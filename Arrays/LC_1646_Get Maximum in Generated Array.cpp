// Bruteforce Approach
// Time Complexity: O(n)
// Space Complexity: O(n)
class Solution
{
public:
    int getMaximumGenerated(int n)
    {
        if (n == 0)
            return 0;
        else if (n == 1)
            return 1;
        else
        {
            vector<int> nums(n + 1);
            nums[0] = 0, nums[1] = 1;
            int maxE = 1;
            for (int i = 2; i <= n; i++)
            {
                if (i % 2 == 0)
                    nums[i] = nums[i / 2];
                else
                    nums[i] = nums[int(i / 2)] + nums[int(1 + i / 2)];
                maxE = max(maxE, nums[i]);
            }
            return maxE;
        }
    }
};