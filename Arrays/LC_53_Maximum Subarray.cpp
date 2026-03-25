// Bruteforce Approach
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size(),smax=INT_MIN;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum+=nums[j];
                smax=max(smax,sum);
            }
        }
        return smax;
    }
};
// Optimal Approach (Kadane's Algorithm)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size(), smax = INT_MIN, sum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            smax = max(smax, sum);
            if (sum < 0)
                sum = 0;
        }
        if(smax<0) return 0;
        return smax;
    }
};