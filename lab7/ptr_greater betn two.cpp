//WAP to find the greater between two numbers by the use of pointer.
#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter any two numbers: ");
    scanf("%d %d", &a, &b);
    int *c = &a, *d = &b;
    if (*c > *d)
        printf("%d is the greater number.\n", *c);
    else
        printf("%d is the greater number.\n", *d);
    return 0;
}