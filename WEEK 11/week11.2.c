#include <stdio.h>
// Inner structure
struct Address
{
    char city[20];
    int pincode;
};
// Outer structure
struct Student
{
    int id;
    struct Address addr;  // Nested structure
};
int main()
{
    struct Student s;
    printf("Enter ID: ");
    scanf("%d", &s.id);
    printf("Enter City and Pincode: ");
    scanf("%s %d", s.addr.city, &s.addr.pincode);
    printf("ID = %d\n", s.id);
    printf("City = %s\n", s.addr.city);
    printf("Pincode = %d\n", s.addr.pincode);
    printf("\n\n             - 25331A05D3");

    return 0;
}
