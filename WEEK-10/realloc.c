#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr, n = 3, i;

    ptr = (int*) malloc(n * sizeof(int));

    printf("Enter 3 elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }

    ptr = (int*) realloc(ptr, 5 * sizeof(int));

    printf("Enter 2 more elements:\n");
    for(i = 3; i < 5; i++) {
        scanf("%d", &ptr[i]);
    }

    printf("All elements are:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }

    free(ptr);

    return 0;
}