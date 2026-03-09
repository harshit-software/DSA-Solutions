// BruteForce Solution
int longestSubarrayWithSumK(vector<int> a, long long k) {
    int len = 0,n = a.size();
        for(int i=0;i<n;i++){
            long long sum=0;
            for(int j=i;j<n;j++){
                sum+=a[j];
                if(sum==k){
                    len=max(len,j-i+1);
                }
            }
        }
    return len;
}