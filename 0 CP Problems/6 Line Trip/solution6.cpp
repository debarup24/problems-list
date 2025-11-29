#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;

   // 0 ------> 7 -----> 10
	
	while(t--){
	    int n, x;
	    cin>> n >> x;

	
	int a[n];
	
	for(int i=0; i<n; i++) {
	    cin>> a[i];
	}
	
	int gasPump_maxDist = 0;
	
	int dist_start = a[0] - 0 ;
	int dist_end = x - a[n-1] ;
	
	for (int i = 0; i < n-1; i++) {
        int diff = a[i+1] - a[i];
        if (diff > gasPump_maxDist) {
            gasPump_maxDist = diff;
        }
    }
    
   //cout<< "Max Gas Dist : " << gasPump_maxDist << endl;
   //cout<< "dist_start : " << dist_start << endl;
   //cout<< "dist_end : " << dist_end << endl;
   
	
   if(gasPump_maxDist > dist_start && gasPump_maxDist > (2*dist_end)){
       cout<<gasPump_maxDist << endl;
   }
   else if(dist_start > 2*(dist_end) ) {
       cout<< dist_start << endl;
   }
   else {
       cout<< 2*dist_end << endl;
   }
   
 } 

}
