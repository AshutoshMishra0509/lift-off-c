/* write a c program to enter the radius of a circle and finds its diameter, circumference and area.*/ 
#include <stdio.h>

int main()
{
    float radius, diameter, circumference, area;
    
    
    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    
    diameter = 2 * radius;
    circumference = 2 * 3.14 * radius;
    area = 3.14 * (radius * radius);

    
    printf("Diameter of circle = %.2f units \n", diameter);
    printf("Circumference of circle = %.2f units \n", circumference);
    printf("Area of circle = %.2f sq. units ", area);

    return 0;
}