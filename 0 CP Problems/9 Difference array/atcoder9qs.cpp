#include <bits/stdc++.h>
using namespace std;

const int N = 1e6+1;
long long diff[N];



int main() {
	// your code goes here
	long long n;
	cin>>n ;
	int c;
	cin>> c;
	
	vector<long long>start(n),end(n),cost(n);
	
	for(long long i=0;i<n;i++){//n
        cin>>start[i]>>end[i]>>cost[i];
    }
	
	for(long long i=0;i<n;i++){//n
        diff[start[i]] += cost[i] ;
        diff[end[i]+1] -= cost[i] ;
    }
    
    for(long long i=1;i<N;i++){
        diff[i] +=diff[i-1];
    }
    
    long long ans = 0;
    
    for(long long i=0;i<N;i++){
        if(diff[i]<c){
           ans += diff[i]; 
        }else
        ans +=  c;
    }
    cout<<ans<<endl;


}
