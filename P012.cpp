#include <cmath>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main()
{
    int a, b, c;
    scanf("%d", a);
    scanf("%d", b);
    scanf("%d", c);
    int semiPerimeter = (a+b+c)/2;
    int area = sqrt(semiPerimeter*(semiPerimeter-a)*(semiPerimeter-b)*(semiPerimeter-c));
    printf("%d", area);
    return 0;
}