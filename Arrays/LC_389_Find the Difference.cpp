// Method 1
class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> mp;
        for(auto it:t) mp[it]++;
        for(auto it:s){
            mp[it]--;
            if(mp[it]==0) mp.erase(it);
        }
        for(auto it:mp) return it.first;
        return ' ';
    }
};