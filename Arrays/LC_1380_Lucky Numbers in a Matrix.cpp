// Bruteforce Solution
class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        unordered_map<int,int> mp;
        vector<int> res;
        int n=matrix.size(),m=matrix[0].size();
        for(int i=0;i<n;i++){
            int small=matrix[i][0];
            for(int j=0;j<m;j++){
                small=min(small,matrix[i][j]);
            }
            for(int k=0;k<m;k++){
                if(small==matrix[i][k]) mp[small]=k;
            }
        }
        for(auto it:mp){
            int key=it.first,col=it.second;
            int big=INT_MIN;
            for(int i=0;i<n;i++){
                big=max(big,matrix[i][col]);
            }
            if(big==key) res.push_back(key);
        }
        return res;
    }
};

// Better Solution
class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int> res;
        int n=matrix.size(),m=matrix[0].size();
        for(int i=0;i<n;i++){
            int small=matrix[i][0],col=0;
            for(int j=1;j<m;j++){
                if(small>matrix[i][j]){
                    small=matrix[i][j];
                    col=j;
                }
            }
            bool ismax=true;
            for(int k=0;k<n;k++){
                if(matrix[k][col]>small){
                    ismax=false;
                    break;
                }
            }
            if(ismax) res.push_back(small);
        }
        return res;
    }
};