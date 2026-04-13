// Bruteforce Approach
class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<int> res;
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==1) count++;
            }
            res.push_back(count);
        }
        return res;
    }
};