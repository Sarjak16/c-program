////Create an array of structure to store name,address,salary of 10 persons and display the details 
//of highest paid person.
#include <stdio.h>

int main()
{
    struct det
    {
        char name[20];
        char address[40];
        int salary;
    }s[10];
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("Enter Name, Address and Salary of Employee: ");
        scanf("%s %s %d", s[i].name, s[i].address, &s[i].salary);
    }
    for (i = 0; i < 10; i++)
    {
        printf("Name: %s\tAddress: %s\tSalary: %d\n", s[i].name, s[i].address, s[i].salary);
    }
    return 0;
}

