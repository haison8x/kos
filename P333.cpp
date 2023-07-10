#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;

long long int combination(int k, int n)
{
    float halfOfN = (float)n / 2;
    if (k > halfOfN)
    {
        k = n - k;
    }

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
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);

    long long int sum = 0;

    int distance = m - n + 1;

    for (int i = 1; i <= distance; i++)
    {
        long long int ck = combination(i, distance);
        sum = sum + ck;
    }

    printf("%lld", sum);

    return 0;
}