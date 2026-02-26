class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int> mp;
        for(auto it:arr) mp[it]++;
        for(auto it:mp){
            int key=it.first;
            if(mp[key]>n/4) return key;
        }
        return arr[n-1];
    }
};