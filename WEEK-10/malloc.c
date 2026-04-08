#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr1, *ptr2, n = 5, i;

    ptr1 = (int*) malloc(n * sizeof(int));
    ptr2 = (int*) calloc(n, sizeof(int));

    printf("Enter 5 elements for malloc array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &ptr1[i]);
    }

    printf("Elements using malloc:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", ptr1[i]);
    }

    printf("\nElements using calloc (default values):\n");
    for(i = 0; i < n; i++) {
        printf("%d ", ptr2[i]);
    }
    printf("\n\n           -25331A05C9");

    return 0;
}
