// Method 1
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto it:nums) mp[it]++;
        for(auto it:mp){
            int key=it.first;
            if(mp[key]==1) return key;
        }
        return nums[0];
    }
};

// Method 2
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(auto it:nums) ans^=it;
        return ans;
    }
};