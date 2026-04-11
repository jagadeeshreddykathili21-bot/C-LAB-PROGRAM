#include <stdio.h>
struct Student
{
    int id;
    char name[20];
    float marks;
};
int main()
{
    struct Student s;
    printf("Enter ID, Name and Marks: ");
    scanf("%d %s %f", &s.id, s.name, &s.marks);

    printf("\nStudent Details:\n");
    printf("ID = %d\n", s.id);
    printf("Name = %s\n", s.name);
    printf("Marks = %.2f\n", s.marks);
    printf("\n\n             - 25331A05D3");

    return 0;
}
