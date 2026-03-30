// Bruteforce Approach
class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        int n = nums.size(), res;
        for (int i = 0; i < n; i++) {
            if (nums[i] % 2 == 1)
                continue;
            int count = 0;
            bool unique = false;
            for (int j = 0; j < n; j++) {
                if (nums[i] == nums[j]){
                    unique=true;
                    count++;
                }
                if (count>1) {
                    unique = false;
                    break;
                }
            }
            if (unique)
                return nums[i];
        }
        return -1;
    }
};
// Better Approach
class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int x:nums) if(x%2==0) mp[x]++;
        for(int x:nums) if(x%2==0 && mp[x]==1) return x;
        return -1;
    }
};