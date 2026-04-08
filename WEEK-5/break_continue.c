#include<stdio.h>

int main()
{
    int i;

    printf("Demonstration of break statement:\n");

    for(i = 1; i <= 10; i++)
    {
        if(i == 6)
        {
            break;
        }
        printf("%d ", i);
    }

    printf("\nDemonstration of continue statement:\n");

    for(i = 1; i <= 10; i++)
    {
        if(i == 6)
        {
            continue;
        }
        printf("%d ", i);
    }
        printf("\n code by 25331A05G5");
    return 0;
}
