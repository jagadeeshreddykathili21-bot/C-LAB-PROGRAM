#include<stdio.h>

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int x, y, result;

    printf("Enter two numbers: \n");
    scanf("%d %d", &x, &y);

    result = sum(x, y);

    printf("Sum = %d", result);
    printf("\n code by 25331A05G5");  
    return 0;
}
