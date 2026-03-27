// Bruteforce Approach
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> pos,neg,arr(n);
        for(auto it: nums){
            if(it<0) neg.push_back(it);
            else pos.push_back(it);
        }
        int a=0,b=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                arr[i]=pos[a];
                a++;
            }else{
                arr[i]=neg[b];
                b++;
            }
        }
        return arr;
    }
};
// Optimal Approach
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size(),pos=0,neg=1;
        vector<int> res(n);
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                res[neg]=nums[i];
                neg+=2;
            }else{
                res[pos]=nums[i];
                pos+=2;
            }
        }
        return res;
    }
};