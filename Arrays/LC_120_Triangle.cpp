// Bruteforce Approach
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int sum=0,n=triangle.size();
        for(int i=0;i<n;i++){
            int minE=INT_MAX;
            for(int num: triangle[i]){
                minE=min(minE,num);
            }
            sum+=minE;
        }
        return sum;
    }
};