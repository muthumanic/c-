#include <stdio.h>
#include<conio.h>
int main()
{
    int base, exponent;

    long long result = 1;

    printf("Enter a base number: ");
    scanf("%d", &base);

    printf("\nEnter an exponent: ");
    scanf("%d", &exponent);

    while (exponent != 0)
    {
        result *= base;
        --exponent;
    }

    printf(\n"Answer = %lld", result);

    return 0;
}
