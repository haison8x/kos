
// C++ program to demonstrate default behaviour of
// sort() in STL.
#include <iostream>
#include <algorithm>
using namespace std;

bool isInsideTriangle(long int  x1, long int  y1, long int  x2, long int  y2, long int  x3, long int  y3, long int  x, long int  y)
{
    double u = 0;
    double v = 0;
    double w = 0;

    double u1, v1;
    double denominator = (y2 - y3) * (x1 - x3) + (x3 - x2) * (y1 - y3);
    if (denominator == 0)
    {
        return false;
    }
    u1 = (y2 - y3) * (x - x3) + (x3 - x2) * (y - y3);
    v1 = (y3 - y1) * (x - x3) + (x1 - x3) * (y - y3);

    u = u1 / denominator;
    v = v1 / denominator;
    w = 1 - u - v;
    return u >= 0 && u <= 1 && v >= 0 && v <= 1 && w >= 0 && w <= 1;
}

int main()
{
    long int x1, y1, x2, y2, x3, y3, x, y;

    // scanf("%l", &x1);
    // scanf("%l", &y1);
    // scanf("%l", &x2);
    // scanf("%l", &y2);
    // scanf("%l", &x3);
    // scanf("%l", &y3);
    // scanf("%l", &x);
    // scanf("%l", &y);

x1=0;
y1=0;
x2=4;
y2=0;
x3=0;
y3=4;
x=0;
y=2;

    bool yes = isInsideTriangle(x1, y1, x2, y2, x3, y3, x, y);
    if (yes)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}