// Method 1
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        set<int> st;
        for (int it : nums)
            st.insert(it);
        int n = st.size();
        int i = 0;
        for (auto it : st)
        {
            nums[i] = it;
            i++;
        }
        return n;
    }
};

// Method 2
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int n = nums.size(), low = 1, high = 1;
        while (high < n)
        {
            if (nums[high] == nums[high - 1])
                high++;
            else
            {
                nums[low] = nums[high];
                high++;
                low++;
            }
        }
        return low;
    }
};