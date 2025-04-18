#include <bits/stdc++.h>
bool isArmstrong(int num)
{
    // Write your code here

    int duplicate = num;
    int sum = 0;

    int k = to_string(num).length(); // converting number into a string

    while (num > 0)
    {
        int lastDigit = num % 10;
        sum = sum + pow(lastDigit, k); // pow(base, exponent) -- pow(2,4) = 16
        num = num / 10;
    }
    return sum == duplicate;
}