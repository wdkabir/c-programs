#include<stdio.h>
//Write a program to calculate area of a circle?
//Area of circle =pie r squre
int main(){
    float radius;
    printf("Enter Radius: ");
    scanf("%f", &radius);
    printf("circle Area is: %f", 3.14 * radius * radius);
    return 0;
}