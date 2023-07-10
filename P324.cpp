#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int n;
    scanf("%d", &n);

    int array1[100000];
    int array2[100000];

    for (int i = 0; i < n; i++)
    {
        int number;
        scanf("%d", &number);
        array1[i] = array2[i] = number;
    }

    sort(array2, array2 + n);
    for (int i = 0; i < n; i++)
    {
        if (array1[i] != array2[i])
        {
            printf("NO");
            return 0;
        }
    }

    printf("YES");
    return 0;
}