#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;

long int problemA(long int n, long int k)
{
    long int mod = 6971;
    long int product = 1;
    for (int i = 0; i < n; i++)
    {
        product *= (k - 1);
        product = product % mod;
    }
    if (n % 2 == 0)
    {
        product += (k - 1) % mod;
    }
    else
    {
        product -= (k - 1) % mod;
    }

    product = product % mod;
    if (product < 0)
    {
        product += mod;
    }

    return product % mod;
}

int main()
{

    long int T;
    scanf("%ld", &T);

    for (int i = 0; i < T; i++)
    {
        long int n;
        long int k;
        scanf("%ld%ld", &n, &k);
        printf("%ld\n", problemA(n, k));
    }

    return 0;
}
