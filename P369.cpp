#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0 || b == 0)
    {
        return 0;
    }
    else if (a % b == 0)
    {
        return b;
    }
    else if (b % a == 0)
    {
        return a;
    }
    else if (a > b)
    {
        int r = a % b;
        return gcd(b, r);
    }

    else
    {
        int r = b % a;
        return gcd(a, r);
    }
}

int main()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    int maxFactor = gcd(a, b);

    printf("%d", maxFactor);
    return 0;
}