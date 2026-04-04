// Bruteforce Solution
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=nums.size(),ans=0;
        for(int i=0;i<n;i++){
            int count=0,cpy=nums[i];
            while(cpy){
                int rem=cpy%10;
                cpy=cpy/10;
                count++;
            }
            if(count%2==0) ans++;
        }
        return ans;
    }
};