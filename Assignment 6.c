//Write a C program to compute factorial of a number with and without recursion.

#include <stdio.h>

unsigned long long factorial(int n)
{
    if(n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    int n, i;
    unsigned long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n < 0)
    {
        printf("Factorial is not defined for negative numbers.");
    }
    else
    {
        // Without recursion
        for(i = 1; i <= n; i++)
        {
            fact = fact * i;
        }

        printf("\nFactorial without recursion = %llu", fact);

        // With recursion
        printf("\nFactorial with recursion = %llu", factorial(n));
    }

    return 0;
}
