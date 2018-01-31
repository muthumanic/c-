#include <stdio.h>
#include<conio.h>


/* Function declarations */
int isPrime(int num);
void printPrimes(int lowerLimit, int upperLimit);



int main()
{
    int lowerLimit, uppeLimit;
    
    printf(/n"Enter the lower and upper limit to list primes: ");
    scanf("%d%d", &lowerLimit, &upperLimit);
    
    // Call function to print all primes between the given range.
    printPrimes(/nlowerLimit, upperLimit);
    
    return 0;
}
