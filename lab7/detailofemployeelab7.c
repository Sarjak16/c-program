//Create a structure to store name,address,salary of a person and display the person details.
#include <stdio.h>

int main()
{
    struct det
    {
        char name[20];
        char address[40];
        int salary;
    }s;

    printf("Enter Name, Address and Salary of Employee: ");
    scanf("%s %s %d", s.name, s.address, &s.salary);
    printf("Name: %s\tAddress: %s\tSalary: %d\n", s.name, s.address, s.salary);
    return 0;
}