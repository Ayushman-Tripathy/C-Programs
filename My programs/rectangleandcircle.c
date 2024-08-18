#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
    float length, breadth, radius;

    // Input the length and breadth of the rectangle
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    // Input the radius of the circle
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate the area and perimeter of the rectangle
    float rectangleArea = length * breadth;
    float rectanglePerimeter = 2 * (length + breadth);

    // Calculate the area and circumference of the circle
    float circleArea = 3.141592 * pow(radius, 2);
    float circleCircumference = 2 * 3.141592 * radius;

    // Display the results with two decimal places
    printf("Area of the rectangle: %.2f\n", rectangleArea);
    printf("Perimeter of the rectangle: %.2f\n", rectanglePerimeter);
    printf("Area of the circle: %.2f\n", circleArea);
    printf("Circumference of the circle: %.2f\n", circleCircumference);

    return 0;
}
