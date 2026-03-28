// Bruteforce Approach
class Solution {
  public:
    vector<int> leaders(vector<int>& nums) {
        // code here
        vector<int> res;
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            bool big=false;
            for(int j=i+1;j<n;j++){
                if(nums[i]<nums[j]){
                    big=true;
                    break;
                }
            }
            if(big==false) res.push_back(nums[i]);
        }
        res.push_back(nums[n-1]);
        return res;
    }
};

// Optimal Approach
class Solution {
  public:
    vector<int> leaders(vector<int>& nums) {
        // code here
        vector<int> res;
        int n=nums.size(),ele=nums[n-1];
        res.push_back(nums[n-1]);
        for(int i=n-2;i>=0;i--){
            if(nums[i]>=ele){
                    ele=nums[i];
                    res.push_back(nums[i]);
            }
        }
        reverse(res.begin(),res.end());
        return res;
    }
};