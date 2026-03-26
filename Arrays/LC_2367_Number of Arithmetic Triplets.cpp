// Bruteforce Approach
class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int n=nums.size(),count=0;
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
                    if(nums[j]==diff+nums[i] && nums[k]==diff+nums[j]) count++;
                }
            }
        }
        return count;
    }
};

// Better Approach
class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int n=nums.size(),count=0;
        for(int i=0;i<n;i++){
            bool count1=false,count2=false;
            for(int j=i+1;j<n;j++){
                if(!count1 && nums[j]==nums[i]+diff) count1=true;
                else if(count1 && nums[j]==nums[i]+2*diff){
                    count2=true;
                    break;
                }
            }
            if(count1&& count2) count++;
        }
        return count;
    }
};

// Optimal Approach
class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_set<int> st(nums.begin(),nums.end());
        int n=nums.size(),count=0;
        for(int x:nums){
            if(st.count(x+diff) && st.count(x+2*diff)) count++;
        }
        return count;
    }
};