// Bruteforce Approach
class Solution {
public:
    vector<int> replaceElements(vector<int>& nums) {
        int n=nums.size(),ele=0;
        if(n==1) return {-1};
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                ele=max(ele,nums[j]);
            }
            nums[i]=ele;
            ele=0;
        }
        nums[n-1]=-1;
        return nums;
    }
};
// Optimal Approach
class Solution {
public:
    vector<int> replaceElements(vector<int>& nums) {
        int n=nums.size(),ele=-1;
        if(n==1) return {ele};
        for(int i=n-1;i>=0;i--){
            int temp=nums[i];
            nums[i]=ele;
            ele=max(ele,temp);
        }
        return nums;
    }
};