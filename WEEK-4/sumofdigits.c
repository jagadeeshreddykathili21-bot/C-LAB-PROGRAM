#include<stdio.h>

int main()
{
    int num, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }

    printf("Sum of digits = %d", sum);
    printf("\n code by 25331A05G5"); 
    return 0;
}
