#include<stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three numbers: \n");
    scanf("%d %d %d", &a, &b, &c);

    if(a >= b && a >= c)
        printf("Largest number = %d", a);
    else if(b >= a && b >= c)
        printf("Largest number = %d", b);
    else
        printf("Largest number = %d", c);
    printf("\n code by 25331A05G5"); 
    return 0;
}
