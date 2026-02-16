class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        unordered_set<double> mp;
        int n = nums.size(), low = 0, high = n - 1;
        while (low < high) {
            double avg = (nums[low] + nums[high]) / 2.0;
            mp.insert(avg);
            low++;
            high--;
        }
        return mp.size();
    }
};