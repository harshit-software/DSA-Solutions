class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int fmax=INT_MIN,smax=INT_MIN,n=arr.size();
        for(int i=0;i<n;i++){
            if(fmax<arr[i]){
                smax=fmax;
                fmax=arr[i];
            }else if(smax<arr[i] && fmax>arr[i]){
                smax=arr[i];
            }
        }
        if(smax==INT_MIN) return -1;
        return smax;
    }
};