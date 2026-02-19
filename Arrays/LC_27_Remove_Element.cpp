// Method 1
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int low = 0, high = 0, n = nums.size();
        while (high < n) {
            if (nums[high] != val) {
                nums[low] = nums[high];
                low++;
            }
            high++;
        }
        return low;
    }
};

// Method 2
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size(),low = 0, high = n-1;
        while (low<=high) {
            if (nums[low] != val) low++;
            else{
                swap(nums[low],nums[high]);
                high--;
            }
        }
        return low;
    }
};