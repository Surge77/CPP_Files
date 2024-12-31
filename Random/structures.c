#include <stdio.h>

//write a c program using structures to input the details and display it to the screen 

struct employee
{
    char name[20];
    int experience;
    int salary;
    int employeeid;
};

int main()
{
    struct employee E;
    printf("Enter name: ");
    scanf("%s", &E.name);
    printf("Enter experience: ");
    scanf("%d", &E.experience);
    printf("Enter salary: ");
    scanf("%d", &E.salary);
    printf("Enter employee id: ");
    scanf("%d", &E.employeeid);

    printf("\n");

    printf("Employee details are:\n");
    printf("Name: %s ", E.name);
    printf("exp: %d \n", E.experience);
    printf("salary: %d \n", E.salary);
    printf("employeeid: %d\n ", E.employeeid);
    return 0;
}