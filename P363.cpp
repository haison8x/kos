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
    int n, mod;
    scanf("%d", &n);
    scanf("%d", &mod);

    if (n < 0 || mod <= 0)
    {
        printf("%d", 0);
        return 0;
    }

    int result = sumOfFactorial(n, mod);
    printf("%d", result);

    return 0;
}