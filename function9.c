//Write a C program to find diameter, circumference and area of circle using functions
#include<stdio.h>

float diam(float r);
float circum(float r);
float area(float r);

int main() 
{
    float r = 28;

    printf("diameter of circle is %f\n", diam(r));
    printf("circumference of circle is %f\n", circum(r));
    printf("area of circle is %f\n", area(r));

    return 0;
}

float diam(float r) {
    return (2*r);
}

float circum(float r){
    return (2*3.14*r);
}

float area(float r){
    return (3.14*r*r);
}