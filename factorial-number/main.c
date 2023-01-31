#include<stdio.h>
int main()
// Write a program to find the factorial of a number using for loop.
{
    int i, f=1, number;
    printf("Enter a number: ");
    scanf("%d", &number);
    for (i=1; i <= number; i++)
    {
        f = f * i;
    }
    printf("Factorial Number is: %d", f);
    return 0;
}
