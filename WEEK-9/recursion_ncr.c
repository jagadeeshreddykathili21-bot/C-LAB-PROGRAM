#include<stdio.h>

int fact(int n)
{
    if(n == 0 || n == 1)
        return 1;
    else
        return n * fact(n - 1);
}

int main()
{
    int n, r, result;

    printf("Enter value of n and r: ");
    scanf("%d %d", &n, &r);

    result = fact(n) / (fact(r) * fact(n - r));

    printf("Value of nCr = %d", result);

    return 0;
}