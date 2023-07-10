#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;

float calculateDistance(float x1, float y1, float x2, float y2)
{
    float squareX = (x2 - x1) * (x2 - x1);
    float squareY = (y2 - y1) * (y2 - y1);
    float squareSum = squareX + squareY;
    float squareRootSum = sqrt(squareSum);

    return squareRootSum;
}

int main()
{
    // get value of n
    int n;
    scanf("%d", &n);

    if (n <= 1)
    {
        printf("%.6f", 0);
        return 0;
    }

    float currentX, currentY;
    scanf("%f", &currentX);
    scanf("%f", &currentY);

    float sum = 0;

    for (int i = 2; i <= n; i++)
    {
        float nextX, nextY;
        scanf("%f", &nextX);
        scanf("%f", &nextY);

        // get distance
        float distance = calculateDistance(currentX, currentY, nextX, nextY);

        // add to sum
        sum = sum + distance;

        currentX = nextX;
        currentY = nextY;
    }

    printf("%.6f", sum);

    return 0;
}