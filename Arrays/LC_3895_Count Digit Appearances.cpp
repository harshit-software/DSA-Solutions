// Bruteforce Approach
class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int count=0;
        for(int i: nums){
            while(i!=0){
                int rem=i%10;
                if(rem==digit) count++;
                i=i/10;
            }
        }
        return count;
    }
};