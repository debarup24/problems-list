bool palindrome(int n)
{

    int revNum = 0;
    int duplicate = n;

    if (n == 1)
        return "true"; // not req though

    while (n > 0)
    {
        int lastDigit = n % 10;

        revNum = (revNum * 10) + lastDigit;

        n = n / 10;
    }

    if (duplicate == revNum)
        return true;
    else
        return false;
}

// Logic :
// get the reverese of that number, compare with the main number if matched then plindrome other wise not