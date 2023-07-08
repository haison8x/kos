#include <iostream>

int countDivide(int divider, int remainder)
{
    int count = 0;
    for (int i = 1; i < divider; i++)
    {
        int remain = divider % i;
        if (remain == remainder)
        {
            count++;
            printf("good number: %d\r\n", i);
        }
    }

    printf("Total %d numbers\r\n", count);

    return count;
}

int countFactors(int number)
{
    int count = 0;
    for (int i = 1; i <= number; i++)
    {
        int remain = number % i;
        if (remain == 0)
        {
            count++;
            printf("a factor is %d\r\n", i);
        }
    }

    printf("Total %d factors\r\n", count);
    return count;
}

int isPrimeNumber(int number)
{
    int yes = 1;
    int count = countFactors(number);
    if (count > 2)
    {
        yes = 0;
    }
    else
    {
        yes = 1;
    }
    /*
        for (int i = 2; i < number; i++)
        {
            int remain = number % i;
            if (remain == 0)
            {
                yes = 0;
                printf("%d has a factor %d\r\n", number, i);
                break;;
            }
        }
    */
    if (yes)
    {
        printf("%d is a prime number\r\n", number);
    }
    else
    {
        printf("%d is a composite number\r\n", number);
    }

    return yes;
}

int countEndZero(int number)
{
    int divide5 = number / 5;
    int divide25 = number / 25;
    int divide125 = number / 125;
    int divide625 = number / 625;

    int count = divide5 + divide25 + divide125 + divide625;

    printf("number of zero: %d\r\n", count);

    return count;
}

int findMaxPowerOfFive(int number)
{

    int value = 1;

    while (value <= number)
    {
        value = value * 5;
        if (value > number)
        {
            break;
        }
    }

    value = value / 5;

    printf("max power value is %d\r\n", value);
    return value;
}

int nCubes(int number)
{

    int i = 1;
    int sum = 0;
    while (i <= number)
    {
        int cube = i * i * i;
        sum = sum + cube;
        i++;
    }

    return sum;
}



int main()
{
    while (true)
    {
        int number;

        printf("Enter a number:");
        scanf("%d", &number);
        
        int sum = nCubes(number);
        printf("Sum of cubes up to %d is: %d \r\n", number, sum);

        int command;
        printf("Enter 1 to quit the program\r\n");
        scanf("%d", &command);

        if (command == 1)
        {
            break;
        }
    }

    return 0;
}