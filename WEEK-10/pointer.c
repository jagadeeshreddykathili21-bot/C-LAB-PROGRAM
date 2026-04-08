#include <stdio.h>
int main() {
    int a = 10;
    int *ptr;

    ptr = &a;

    printf("Value of a = %d\n", a);
    printf("Address of a = %u\n", ptr);

    ptr++;
    printf("After increment, pointer = %u\n", ptr);

    ptr--;
    printf("After decrement, pointer = %u\n", ptr);
    return 0;
}