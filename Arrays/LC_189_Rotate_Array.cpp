// Method 1
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        if(k==0) return;
        vector<int> temp(k);
        for(int i=n-k;i<n;i++){
            temp[i-n+k]=nums[i];
        }
        for(int i=n-1;i>=k;i--){
            nums[i]=nums[i-k];
        }
        for(int i=0;i<k;i++){
            nums[i]=temp[i];
        }
    }
};

// Method 2
class Solution {
public:
    void reverse(vector<int>& arr, int low, int high) {
        while (low < high) {
            swap(arr[low], arr[high]);
            low++;
            high--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        reverse(nums,0,n-k-1);
        reverse(nums,n-k,n-1);
        reverse(nums,0,n-1);
    }
};