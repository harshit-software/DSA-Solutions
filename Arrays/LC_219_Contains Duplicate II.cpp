// Bruteforce Approach
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]==nums[j] && j-i==k) return true;
            }
        }
        return false;
    }
};

// Better Solution
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        if(k>n) return false;
        for(int i=0;i<n-k+1;i++){
            int j=i+k;
            if(nums[i]==nums[j]) return true;
        }
        return false;
    }
};