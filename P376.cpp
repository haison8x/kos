#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    double a, b, c;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    double sides[] = {a, b, c};
    sort(sides, sides + 3);

    double root1 = pow(sides[0], 2);
    double root2 = pow(sides[1], 2);
    double root3 = pow(sides[2], 2);
    if (root3 == root1 + root2)
    {
        printf("RIGHT");
    }
    else if (root3 < root1 + root2)
    {
        printf("ACUTE");
    }
    else
    {
        printf("OBTUSE");
    }

    return 0;
}