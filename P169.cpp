
// C++ program to demonstrate default behaviour of
// sort() in STL.
#include <iostream>
#include <algorithm>
using namespace std;

int getPosition(int n, int array[], int number)
{
    sort(array, array + n);

    for (int i = 0; i < n; i++)
    {
        if (array[i] == number)
        {
            return i;
        }
    }
}

int main()
{
    int array[1000001];
    int n;
    int number;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", array + i);
    }

    scanf("%d", number);

    int position = getPosition(n, array, number);
    printf("%d", position);
}