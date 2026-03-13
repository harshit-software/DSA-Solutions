class Solution {
public:
    string defangIPaddr(string address) {
        string res="",toAdd="[.]";
        for(auto it: address){
            if(it=='.'){
                res+=toAdd;
            }else{
                res+=it;
            }
        }
        return res;
    }
};