#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long int a, b, c;

    scanf("%ld", &a);
    scanf("%ld", &b);
    scanf("%ld", &c);

    double d = b * b - 4 * a * c;

    double root1, root2;

    if (a == 0)
    {
        if (b != 0)
        {
            root1 = -c / b;
            printf("%.2f", root1);
        }
        else
        {
            if (c != 0)
            {
                printf("NO");
            }
            else
            {
                printf("Inf");
            }
        }
        
        return 0;
    }

    if (d > 0)
    {
        double rootD = sqrt(d);
        root1 = (-b + rootD) / (2 * a);
        root2 = (-b - rootD) / (2 * a);

        printf("%.2f %.2f", root2, root1);
    }
    else if (d == 0)
    {
        root1 = -b / (2 * a);
        printf("%.2f", root1);
    }
    else
    {
        printf("NO");
    }

    return 0;
}