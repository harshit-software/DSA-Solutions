class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res;
        int n=nums.size();
        if(n==0) return {-1,-1};
        else if (n==1 && nums[0]==target) return {0,0}; 
        for(int i=0;i<n;i++){
            if(nums[i]==target) res.push_back(i);
        }
        if(res.size()==0) return {-1,-1};
        else if(res.size()==1){
            int ele=res[0];
            res.push_back(ele);
            return res;
        }
        return res;
    }
};