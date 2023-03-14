#include <stdio.h>

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
    printf("Enter the length of the square: ");
    scanf("%f", &length);
    area = findArea(length);
    diameter = findDiameter(length);
    printf("The area of the square is: %f\n", area);
    printf("The diameter of the square is: %f\n", diameter);
    return 0;
}
