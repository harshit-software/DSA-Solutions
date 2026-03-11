class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> mp;
        int count=0;
        for(auto it: stones) mp[it]++;
        for(auto it: jewels){
            count+=mp[it];
        }
        return count;
    }
};