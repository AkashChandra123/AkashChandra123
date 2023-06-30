#include<stdio.h>

float cube(float n);

int main(){
    float n = 13;
    float c = cube(n);

    printf("cube of number is %f\n", c );
    return 0; 
}
float cube(float n){
    return (n*n*n);
}