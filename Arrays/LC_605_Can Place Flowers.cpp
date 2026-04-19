// Bruteforce Approach
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int m=flowerbed.size();
        for(int i=1;i<m-1;i++){
            if(flowerbed[i-1]==0 && flowerbed[i+1]==0){
                flowerbed[i]=1;
                n--;
            }
            if(n==0) return true;
        }
        return false;
    }
};