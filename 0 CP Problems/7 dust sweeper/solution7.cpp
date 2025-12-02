#include <bits/stdc++.h>
using namespace std;

// Count occurrences of any number within an Array 
// Find Non-zero index then start counting or counting after some index


int main() {
	
	int t;
	cin >> t;
	
	while(t--) {
	    int n;
	    cin >> n;
	    
	   int arr[n];
	   
	   for(int i = 0; i < n; i++) {
        cin >> arr[i];
     }

      // 1) Find first non-zero index
    int firstNonZero = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            firstNonZero = i;
            break;
        }
    }

    // 2) Count zeros after that, but not last index
    int zeroCount = 0;
    if (firstNonZero != -1) {  // Only count zeros if there is at least one non-zero element.
        for (int i = firstNonZero + 1; i < n - 1; i++) {
            if (arr[i] == 0) {
                zeroCount++;
            }
        }
    }
    
    
    // 3) Calculate sum from index 0 to n-2
    long long sum = 0;
    for (int i = 0; i < n - 1; i++) {
        sum += arr[i];
    }

    // 4) Final result = zeroCount + sum
    long long result = zeroCount + sum;
    
    cout << result << endl;
    //   cout<< "ZEROS : " << zeroCount << endl; 
    //   cout<< "SUM is  : " << sum << endl;
    
	} // while

}
