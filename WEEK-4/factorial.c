#include<stdio.h>

int main()
{
    int num, i = 1;
    long int fact = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(i <= num)
    {
        fact = fact * i;
        i++;
    }

    printf("Factorial = %ld", fact);
    printf("           -25331A05C9”);  
    return 0;
}
