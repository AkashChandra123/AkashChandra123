#include<stdio.h>

void num1(int a);
void num2(int b);

int main() {
    int a = 112;
    int b = 25;

     if (a>b){
        num1(a);
    }
    else{
        num2(b);
    }
}

void num1(int a) {
    printf("max num is %d", a);
}

void num2(int b) {
    printf("max num is %d\n", b);
}