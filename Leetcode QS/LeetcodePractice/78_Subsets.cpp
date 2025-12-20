#include <bits/stdc++.h>

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>allSubsets ;
         for(int mask=0; mask<(1<<nums.size()); mask++) {
            vector<int>sbset;
             for(int i=0; i<nums.size(); i++) {
                if((mask & (1<<i)) != 0){
                sbset.push_back(nums[i]) ;
            }
             }
         allSubsets.push_back(sbset) ;
         }
         return allSubsets;
    }
};