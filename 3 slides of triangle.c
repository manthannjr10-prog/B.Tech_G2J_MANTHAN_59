#include <stdio.h>

int main() 
{
    float a, b, c;

    printf("Enter three sides of triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    // Check triangle validity (Triangle Inequality Theorem)
    if (a + b > c && a + c > b && b + c > a) {

        printf("The given sides form a triangle.\n");

        // Check type of triangle
        if (a == b && b == c) {
            printf("It is an Equilateral Triangle.\n");
        }
        else if (a == b || b == c || a == c) {
            printf("It is an Isosceles Triangle.\n");
        }
        else {
            printf("It is a Scalene Triangle.\n");
        }
    }
    else {
        printf("The given sides do NOT form a triangle.\n");
    }

    return 0;
}