#include <bits/stdc++.h>
using namespace std;

// Chat Gpt discussion : https://chatgpt.com/share/695a05a5-5e9c-8008-8c75-2819758a1092
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
 
        bool has2026 = false;
        bool has2025 = false;
 
        for (int i = 0; i + 3 < n; i++) {
            if (s.substr(i, 4) == "2026") has2026 = true; //s.substr(start_indx, length)
            if (s.substr(i, 4) == "2025") has2025 = true;
        }
 
        // Already GOOD
        if (has2026 || !has2025) {
            cout << 0 << "\n";
            continue;
        }
 
        // Cost to create "2026"
        int costCreate2026 = INT_MAX; //We want minimum changes needed to turn some 4-length substring into "2026". 
        string target = "2026";
 
        for (int i = 0; i + 3 < n; i++) { //outer loop : choose starting position
            int cost = 0;
            for (int j = 0; j < 4; j++) { //inner loop : compare characters
                if (s[i + j] != target[j]) cost++;
            }
            costCreate2026 = min(costCreate2026, cost);
        }
        
        //cout<<costCreate2026<< "\n";
 
        // Cost to break "2025" (always 1)
        int costBreak2025 = 1;
 
        cout << min(costCreate2026, costBreak2025) << "\n";
    }
 
    return 0;
}