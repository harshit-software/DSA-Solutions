// Bruteforce Approach
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<n;j++){
                if(nums[i]==nums[j]) count++;
                if(count>=n/2) return nums[i];
            }
        }
        return -1;
    }
};

// Better Approach
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n=nums.size();
        for(auto it:nums){
            mp[it]++;
            if(mp[it]>n/2) return it;
        }
        return 1;
    }
};

// Optimal Approach (Moore's Voting Algorithm)
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size(),count=0,ele;
        for(int i=0;i<n;i++){
            if(count==0) ele=nums[i];
            if(ele==nums[i]) count++;
            else count--;
        }
        return ele;
    }
};