#include <bits/stdc++.h>

// Qs Link : https://leetcode.com/problems/lexicographically-smallest-string-after-reverse/description/

class Solution {
public:
    string lexSmallest(string s) {
        int n = s.length();
        string ans = s;

        for(int k=1; k<=n; k++) {
            string s1 = s;
            reverse(s1.begin(), s1.begin()+k);
            
            string s2 = s;
            reverse(s2.end()-k, s2.end());
            ans = min({ans, s1, s2});
        }
        return ans;
    }
};