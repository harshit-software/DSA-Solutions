class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        set<int> mainSet;
        vector<int> res;
        for(auto it:a) mainSet.insert(it);
        for(auto it:b) mainSet.insert(it);
        for(auto it:mainSet) res.push_back(it);
        sort(res.begin(),res.end());
        return res;
    }
};