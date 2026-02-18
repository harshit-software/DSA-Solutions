// Method 1
class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> temp;
        for (auto it : nums)
            if (it != 0)
                temp.push_back(it);
        int m = temp.size();
        for (int i = 0; i < m; i++)
        {
            nums[i] = temp[i];
        }
        for (int i = m; i < n; i++)
        {
            nums[i] = 0;
        }
    }
};

// Method 2
class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int n = nums.size(), low = 0, high = 0;
        while (high < n)
        {
            if (nums[high] != 0)
            {
                nums[low] = nums[high];
                low++;
            }
            high++;
        }
        for (int i = low; i < n; i++)
        {
            nums[i] = 0;
        }
    }
};

// Method 3
class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int n = nums.size(), low = 0, high = 0;
        while (high < n)
        {
            if (nums[high] != 0)
            {
                swap(nums[low],nums[high]);
                low++;
            }
            high++;
        }
    }
};