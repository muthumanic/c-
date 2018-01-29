#include<stdio.h)
#include<conio.h>
int main()
{
    int number;

    printf("Enter an intger: ");
    scanf("%d", &number);

    // True if the num is perfectly divide by 2
    if(number % 2 == 0)
        printf(\n"%d is even.", number);
    else
        printf(\n"%d is odd.", number);

    return 0;
}
