#include<stdio.h>

void fib(int n){
    int a = 0;
    int b = 1;
    int c;
    for(int i = 0; i< 15; i++){
        printf("%d\n", a);
        c = a + b;
        a = b;
        b = c;
        }
    }
int main(){
    int n = 15;
    //printf("the fibonacci series: \n");
    fib(n);
    return 0;
}