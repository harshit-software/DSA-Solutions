// Not Solved Yet
class Solution {
public:
    int rob(vector<int>& nums) {
        int res=0,n=nums.size();
        for(int i=0;i<n;i+=2){
            res=res+nums[i];
        }
        return res;
    }
};