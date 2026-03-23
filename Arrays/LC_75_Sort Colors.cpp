// Bruteforce Approach
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero=0,one=0,two=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) zero++;
            else if(nums[i]==1) one++;
            else if(nums[i]==2) two++;
        };
        for(int i=0;i<nums.size();i++){
            if (i<zero) nums[i]=0;
            else if (i<zero+one) nums[i]=1;
            else if(i>=zero+one) nums[i]=2;
        }
    }
};
// Optimal Approach
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size(), low = 0, mid = 0, high = n - 1;
        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[mid], nums[low]);
                mid++;
                low++;
            } else if (nums[mid] == 1)
                mid++;
            else {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};