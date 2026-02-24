// Solution is right for positive testcases only
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int fmax=INT_MIN,smax=INT_MIN,tmax=INT_MIN,n=nums.size();
        for(int i=0;i<n;i++){
            if(fmax<nums[i]){
                tmax=smax;
                smax=fmax;
                fmax=nums[i];
            }
            else if(smax<nums[i]){
                tmax=smax;
                smax=nums[i];
            }else if(tmax=nums[i]){
                tmax=nums[i];
            }
        }
        return tmax*smax*fmax;
    }
};