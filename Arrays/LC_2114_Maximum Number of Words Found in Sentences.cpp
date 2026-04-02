class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int res=0;
        for(auto it: sentences){
            int count=0;
            for(auto ch:it){
                if(ch==' ') count++;
            }
            res=max(res,count+1);
        }
        return res;
    }
};