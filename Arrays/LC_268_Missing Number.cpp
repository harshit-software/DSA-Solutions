// Method 1
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
        }
        int total = (n * (n + 1)) / 2;
        return total-sum;
    }
};

// Method 2
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for (int i = 0; i <= n; i++) {
            ans= ans^i;
        }
        for(auto it:nums) ans^=it;
        return ans;
    }
};