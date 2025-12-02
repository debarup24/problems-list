#include <bits/stdc++.h>
using namespace std;
 
bool isMeow(string s) {
    int n = s.size();
    
    if (n < 4) return false ;
    
    // convert entire string to lowercase
    for (int i = 0; i < n; i++) {
        s[i] = tolower(s[i]);
    }
 
    // must follow pattern: m...e...o...w...
    int i = 0;
 
    // first part: m+
    // First if checks if the sound starts with 'm'
    if (s[i] != 'm') return false;  //If no 'm' found → return false
    while (i < n && s[i] == 'm') i++; //The while loop continues as long as we see 'm'  //and It moves i forward over all 'm' characters
 
    // second part: e+
    if (i == n || s[i] != 'e') return false;
    while (i < n && s[i] == 'e') i++; //Move over all 'e's
 
    // third part: o+
    if (i == n || s[i] != 'o') return false;
    while (i < n && s[i] == 'o') i++; // same logic
 
    // last part: w+
    if (i == n || s[i] != 'w') return false;
    while (i < n && s[i] == 'w') i++;
 
    // must end exactly after w+ : After finishing 'w's, i must be exactly at the end of the string.
    return (i == n);
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
 
        if (isMeow(s)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}