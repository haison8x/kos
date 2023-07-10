#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;

int factorial(int n, int mod)
{
    if (n >= mod)
    {
        return 0;
    }

    int product = 1;
    for (int i = 1; i <= n; i++)
    {
        product = (product * i) % mod;
    }

    return product % mod;
}

int sumOfFactorial(int n, int mod)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int factorialOfI = factorial(i, mod);
        sum = (sum + factorialOfI) % mod;
    }

    return sum % mod;
}

int main()
{
    // get value of n and mod
    int n;
    scanf("%d", &n);

    if (n < 0)
    {
        printf("%04d", 0);
        return 0;
    }

    int result = sumOfFactorial(n, 10000);
    printf("%04d", result);

    return 0;
}