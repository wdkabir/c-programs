#include <stdio.h>
/*Write a multi-function C-program to find the area and diameter of a square. The
value of length must be taken from the user in the main function and should be then
passed to the two functions for area and diameter calculation.*/

float findArea(float length)
{
    return length * length;
}

float findDiameter(float length)
{
    return length * sqrt(2);
}

int main()
{
    float length, area, diameter;
    printf("Enter the Length of the square: ");
    scanf("%f", &length);
    area = findArea(length);
    diameter = findDiameter(length);
    printf("The area of the square is: %f\n", area);
    printf("The diameter of the square is: %f\n", diameter);
    return 0;
}
