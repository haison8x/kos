
// C++ program to demonstrate default behaviour of
// sort() in STL.
#include <iostream>
#include <algorithm>
using namespace std;

int countDistinct(int n, int array[])
{
    if (n == 0)
    {
        return 0;
    }

    sort(array, array + n);
    int count = 1;
    int min = array[0];
    for (int i = 0; i < n; i++)
    {
        if (array[i] > min)
        {
            count++;
            min = array[i];
        }
    }
    return count;
}

int main()
{
    int array[1000001];
    int n;
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", array + i);
    }

    int count = countDistinct(n, array);
    printf("%d", count);
}