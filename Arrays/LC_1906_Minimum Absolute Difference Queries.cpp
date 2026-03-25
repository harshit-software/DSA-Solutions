// Bruteforce Approach
class Solution {
public:
    vector<int> minDifference(vector<int>& nums, vector<vector<int>>& queries) {
        int n = queries.size();
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            int first = queries[i][0], second = queries[i][1];
            int diff = abs(second - first);
            if (diff == 1) {
                int ele = abs(nums[second] - nums[first]);
                if (ele == 0)
                    ans.push_back(-1);
                else
                    ans.push_back(ele);
            } else {
                int minE = INT_MAX;
                for (int i = first; i < second; i++) {
                    bool ele1=false;
                    for (int j = i + 1; j <= second; j++) {
                        int ele = abs(nums[i] - nums[j]);
                        if (ele == 1) {
                            minE = 1;
                            ele1=true;
                            break;
                        } else {
                            if (ele == 0)
                                minE = -1;
                            else {
                                minE = min(minE, ele);
                            }
                        }
                    }
                    if(ele1) break;
                }
                ans.push_back(minE);
            }
        }
        return ans;
    }
};