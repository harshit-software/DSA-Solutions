// Bruteforce Approach
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(target==nums[i]+nums[j]){
                    return {i,j};
                }
            }
        }
        return {};
    }
};
// Better Approach
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int ele=target-nums[i];
            if(mp.find(ele)!=mp.end()){
                return {mp[ele],i};
            }
            mp[nums[i]]=i;
        }
        return {};
    }
};