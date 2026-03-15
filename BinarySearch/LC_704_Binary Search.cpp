class Solution {
public:
int binary(vector<int>& nums, int target,int low,int high){
    if(low>high) return -1;
    int mid=(low+high)/2;
    if(nums[mid]==target) return mid;
    else if(nums[mid]>target){
        high=mid-1;
        return binary(nums,target,low,high);
    }
    else if(nums[mid]<target){
        low=mid+1;
        return binary(nums,target,low,high);
    }
    return -1;
}
    int search(vector<int>& nums, int target) {
        int n=nums.size(),low=0,high=n-1;
        return binary(nums,target,low,high);
    }
};