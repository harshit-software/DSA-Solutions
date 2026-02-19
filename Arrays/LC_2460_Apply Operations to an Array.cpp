class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                nums[i]=nums[i]*2;
                nums[i+1]=0;
            }
        }
        int low=0,high=0;
        while(high<n){
            if(nums[high]!=0){
                nums[low]=nums[high];
                low++;
            }
            high++;
        }
        for(int i=low;i<n;i++){
            nums[i]=0;
        }
        return nums;
    }
};