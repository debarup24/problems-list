 #include <iostream>
 #include <vector>
 #include <algorithm>
 #include <cmath>
  using namespace std;

 int main() {
    int t; 
    cin >> t; // taking number of test cases as input

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        // count how many are even and how many are odd
        int evenCount = 0, oddCount = 0;

        if (a % 2 == 0) evenCount++; else oddCount++;
        if (b % 2 == 0) evenCount++; else oddCount++;
        if (c % 2 == 0) evenCount++; else oddCount++;

        // Case 1: All same parity (all even or all odd)
        if (evenCount == 3 || oddCount == 3) {
            cout << "1 1 1" << endl;
        }
        // Case 2: 2 evens, 1 odd → print 1 in odd’s place (since odd count < even)
        else if (evenCount == 2 && oddCount == 1) {
          cout << (a % 2 == 0 ? 0 : 1) << " " //return 1 if a is odd, else return 0
               << (b % 2 ? 1 : 0) << " "//this expression checks:Is a%2 true(non-zero)?
               << (c % 2 ? 1 : 0) << endl;
        }
        // Case 3: 2 odds, 1 even → print 1 in even’s place (since even count < odd)
        else {
            cout << (a % 2 == 0 ? 1 : 0) << " "
                 << (b % 2 == 0 ? 1 : 0) << " "
                 << (c % 2 == 0 ? 1 : 0) << endl;
        }
    }
    return 0;
}
