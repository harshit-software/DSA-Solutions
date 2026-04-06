// Bruteforce Approach
class Solution {
public:
    vector<int> findPeaks(vector<int>& nums) {
        vector<int> res;
        int n=nums.size();
        if(n<=2) return {};
        for(int i=1;i<n-1;i++){
            if(nums[i]>nums[i-1] && nums[i]>nums[i+1]) res.push_back(i);
        }
        return res;
    }
};