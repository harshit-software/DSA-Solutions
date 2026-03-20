class Solution {
public:
    string interpret(string command) {
        string res="",check="";
        for(char ch:command){
            check+=ch;
            if(check=="G"){
                res+="G";
                check="";
            }
            else if(check=="()"){
                res+="o";
                check="";
            }
            else if(check=="(al)"){
                res+="al";
                check="";
            }
        }
        return res;
    }
};