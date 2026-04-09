class Solution {
public:
    int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
    int findGCD(vector<int>& nums) {
        int minE = INT_MAX, maxE = INT_MIN;
        for(int x: nums){
            minE=min(x,minE);
            maxE=max(x,maxE);
        }
        if(maxE%minE==0) return minE;
        return gcd(minE, maxE);
    }
};