#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;

long gcd(long a, long b)
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
    long int a, b;
    scanf("%ld", &a);
    scanf("%ld", &b);

   long int maxFactor = gcd(a, b);

    long int minMultiple = a * b / maxFactor;
    printf("%ld", minMultiple);
    return 0;
}