#include<stdio.h>

int main()
{
    int marks;

    printf("Enter student marks: ");
    scanf("%d", &marks);

    if(marks >= 90)
        printf("Grade: A");
    else if(marks >= 75)
        printf("Grade: B");
    else if(marks >= 60)
        printf("Grade: C");
    else if(marks >= 50)
        printf("Grade: D");
    else
        printf("Grade: F");
        printf("\n code by 25331A05G5");   
    return 0;
}
