class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n=candyType.size();
        unordered_set<int> st(candyType.begin(),candyType.end());
        int m=st.size();
        if(n/2>m) return m;
        return n/2;
    }
};