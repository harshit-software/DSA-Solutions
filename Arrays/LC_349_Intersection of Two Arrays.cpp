// Method 1
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        unordered_map<int,int> m1,m2;
        for(auto it:nums1) m1[it]++;
        for(auto it:nums2) m2[it]++;
        int m=m1.size(),n=m2.size();
        if(m>=n){
            for(auto it:m2){
                int key=it.first;
                if(m1[key]!=0) res.push_back(key);
            }
        }else{
            for(auto it:m1){
                int key=it.first; 
                if(m2[key]!=0) res.push_back(key);
            }
        }
        return res;
    }
};

// Method 2
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        unordered_set<int> s1,s2;
        for(auto it:nums1) s1.insert(it);
        for(auto it:nums2) s2.insert(it);
        int m=s1.size(),n=s2.size();
        if(m>=n){
            for(auto it:s2){
                if(s1.find(it)!=s1.end()) res.push_back(it);
            }
        }else{
            for(auto it:s1){ 
                if(s2.find(it)!=s2.end()) res.push_back(it);
            }
        }
        return res;
    }
};