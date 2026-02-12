class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> res;
        unordered_map<int,int> mp;
        int minE=INT_MAX,maxE=INT_MIN,n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            if(nums[i]>maxE) maxE=nums[i];
            if(nums[i]<minE) minE=nums[i];
        }
        for(int i=minE;i<=maxE;i++){
            if(mp[i]==0) res.push_back(i);
        }
        return res;
    }
};