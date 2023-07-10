#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;

long long int combination(int n, int k)
{
    long long int product = 1;
    for (int i = n; i > n - k; i--)
    {
        product = product * i;
    }

    for (int i = 1; i <= k; i++)
    {
        product = product / i;
    }

    return product;
}

int main()
{
    int n, k;
    scanf("%d", &k);
    scanf("%d", &n);
    
    float halfOfN = (float)n / 2;
    if (k > halfOfN)
    {
        k = n - k;
    }

    long long int ck = combination(n, k);

    printf("%lld", ck);

    return 0;
}