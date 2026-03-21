class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size(),rem=n*0.05;
        double sum=0;
        for(int i=rem;i<n-rem;i++){
            sum+=arr[i];
        }
        return sum/(n-2*rem);
    }
};