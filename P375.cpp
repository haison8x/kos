#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    double a, b;
    scanf("%lf", &a);
    scanf("%lf", &b);

    double c = a * a + b * b;
    c = sqrt(c);
    printf("%.g", c);
    return 0;
}