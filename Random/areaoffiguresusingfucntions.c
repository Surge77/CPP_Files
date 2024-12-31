#include <stdio.h>

//this is a C program

//Question:  Program for finding areas of circle,triangle,rectangle using functions

// Function for finding the area of rectangle

float area_of_rectangle(float length, float breadth)
{

    float area = length * breadth;
    return (area);
}

// Function for finding are of circle

float area_of_circle(float radius)
{

    float area = 3.14 * radius * radius;
    return (area);
}

// Function for finding area of triangle

float area_of_triangle(float base, float height)
{

    float area = 0.5 * base * height;
    return (area);
}

int main()
{
    // declare varibles

    float length, breadth, radius, base, height;

    // Prompt the user to enter the dimensions of the rectangle

    printf("Enter length and breadth of rectangle: ");
    scanf("%f %f", &length, &breadth);

    // Prompt the user to enter the dimensions of the cirle

    printf("Enter the radius of circle: ");
    scanf("%f", &radius);

    // Prompt the user to enter the dimensions of the triangle

    printf("Enter the base and height of triangle: ");
    scanf("%f %f", &base, &height);

    // Calculate the area of the rectangle
    float area_rectangle = area_of_rectangle(length, breadth);

    // Calculate the area of the circle
    float area_circle = area_of_circle(radius);

    // Calculate the area of the triangle
    float area_triangle = area_of_triangle(base, height);

      // Display the results
      printf("The area of rectangle is: %f\n",area_rectangle);
      printf("The area of circle is: %f\n",area_circle);
      printf("The area of triangle is: %f\n",area_triangle);

      return 0; 
}