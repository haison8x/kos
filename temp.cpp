#include <iostream>
long long int t, n, k, prd, kt1, t1, mod;
int main01()
{
    mod = 6971;
    scanf("%lld", &t);
    for (int i = 1; i <= t; i++)
    {
        scanf("%lld%lld", &n, &k);
        prd = 1;
        kt1 = k - 1;
        t1 = -1;
        kt1 %= mod;
        for (int i = 1; i <= n; i++)
        {
            prd = prd * kt1;
            prd %= mod;
        }
        if (n % 2 != 0)
        {
            prd = prd % mod - kt1;
        }
        else
        {
            prd = kt1 + prd % mod;
        }
        if (prd < 0)
        {
            prd += mod;
        }
        printf("%lld\n", prd % mod);
    }
    return 0;
}