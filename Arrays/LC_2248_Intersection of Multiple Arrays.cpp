// Bruteforce Approach
class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int> res;
        map<int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int m=nums[i].size();
            for(int j=0;j<m;j++){
                mp[nums[i][j]]++;
            }
        }
        for(auto it:mp){
            int key=it.first;
            if(mp[key]==n) res.push_back(key);
        }
        return res;
    }
};