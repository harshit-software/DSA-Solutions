// Method 1
class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count=0,n=details.size();
        for(int i=0;i<n;i++){
            int sum=int(details[i][11]-'0')*10+int(details[i][12]-'0');
            if(sum>60) count++;
        }
        return count;
    }
};

// Method 2
class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        
        for (auto &d : details) {
            int age = stoi(d.substr(11, 2));
            if (age > 60) count++;
        }
        
        return count;
    }
};