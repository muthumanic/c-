#include <stdio.h>
#include<conio.h>
int main()
{
    double n1, n2, n3;

    printf("Enter three different num: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    if( n1>=n2 && n1>=n3 )
        printf(\n"%.2f is the largest num.", n1);

    if( n2>=n1 && n2>=n3 )
        printf(\n"%.2f is the largest num.", n2);

    if( n3>=n1 && n3>=n2 )
        printf(\n"%.2f is the largest numb.", n3);

    return 0;
}
