//Create a function int small(int a,int b) that finds the smaller number between two numbers.
#include <stdio.h>

int small(int a, int b);

int main()
{
    int x, y;
    printf("Enter any two numbers:\nA, B: ");
    scanf("%d %d", &x, &y);
    if (x == y)
        printf("They are equal.\n");
    else
        printf("%d is the smaller number.\n", small(x, y));
    return 0;
}

int small(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}
