// Method 1
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> res;
        set<int> st(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=1;i<=n;i++){
            if(!st.count(i)) res.push_back(i);
        }
        return res;
    }
};
// Method 2
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        
        for(int i = 0; i < n; i++) {
            int index = abs(nums[i]) - 1;
            if(nums[index] > 0)
                nums[index] = -nums[index];
        }
        
        vector<int> res;
        for(int i = 0; i < n; i++) {
            if(nums[i] > 0)
                res.push_back(i + 1);
        }
        
        return res;
    }
};