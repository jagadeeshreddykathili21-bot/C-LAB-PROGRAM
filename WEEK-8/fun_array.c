#include<stdio.h>

void display(int arr[], int n)
{
    int i;

    printf("Array elements are:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    display(arr, n);
    printf("           -25331A05C9”);
    return 0;
}
