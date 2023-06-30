#include<stdio.h>
float squareArea(float a);
float rectangleArea(float b,float c);
float circleArea(float r);

int main(){
    float a = 6;
    float b = 4;
    float c = 5;
    float r = 7;
    printf("area of square is %f\n", squareArea(a));
    printf("area of rectangle is %f\n",rectangleArea(b, c));
    printf("area of circle is %f\n", circleArea(r));
    return 0;
}
float squareArea(float a){
    return a*a;
}
float rectangleArea(float b, float c){
    return b*c;
}
float circleArea(float r){
    return 3.14*r*r;
}