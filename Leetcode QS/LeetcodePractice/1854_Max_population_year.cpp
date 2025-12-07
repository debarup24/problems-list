#include <bits/stdc++.h>
using namespace std;

// QS : https://leetcode.com/problems/maximum-population-year/description/ 
// Explanation : https://chatgpt.com/share/6935206d-457c-8008-98c9-549e3e870a59 


int maximumPopulation(vector<vector<int>>& logs) {
        // Years range from 1950 to 2050
        int diff[2051] = {0};

        // Step 1: Mark +1 at birth year, -1 at death year
        for (auto &p : logs) {
            diff[p[0]]++;       // P[0] BIRTH ,,  P[1] DEATH
            diff[p[1]]--;       
        }

        // Step 2: Prefix sum to calculate population per year
        int maxPop = 0;
        int year = 1950;
        int curr = 0;

        for (int y = 1950; y <= 2050; y++) {
            curr += diff[y];

            if (curr > maxPop) {
                maxPop = curr;
                year = y;       
            }
        }

        return year;
    }

