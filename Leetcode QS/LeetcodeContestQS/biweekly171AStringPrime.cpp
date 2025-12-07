#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/complete-prime-number/description/ 

 bool isPrime(int num )
  {
     if (num<=1) return false;

     for(int i = 2; i*i<= num; i++) 
        if(num%i == 0) return false;
        return true;
  }
  

    bool completePrime(int num) {
        string s = to_string(num);
        bool ans = true;

        for(int len = s.size(); len>0; len--){
            ans = ans & isPrime(stoi(s.substr(0, len))) ; //stoi = str ti int , stoll str to long long 
        }  // s.substr = inbuilt func s.substr(start_Indx, length)

        int c=0;
        for(int len = s.size(); len>0; len--) {
            ans = ans & isPrime(stoi(s.substr(c, len))) ;
            c++ ;
        }
        return ans;
    }  
    
    

int main() {
	int n;
	cin>>n;
	while(n--) {
	    int num;
	    cin>>num;
	  bool output = completePrime(num);
	   output==1 ? cout<<"True"<<endl : cout<<"False"  <<endl;
	}

}
