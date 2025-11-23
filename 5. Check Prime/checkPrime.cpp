bool isPrime(int n)
{
    // Write your code here.
    int count = 0;

    for (int i = 1; i * i <= n; i++)
    { // square root approach (better)
        if (n % i == 0)
        {
            count++;

            if (n / i != i)
            { // check square root num
                count++;
            }
        }
    }
    if (count == 2)
    {
        return true;
    }
    else
        return false;
}

// logic : go upto square root
