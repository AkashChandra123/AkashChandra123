#include<stdio.h>
int a = 0;
int b = 1;

void fib(int n){
     

    if(n == 0){
        return;   
    }
    else{
        printf("%d", b);
        int c = a + b;
        a = b;
        b = c;
        fib(n -1);
    }
}

int main(){
    int n = 7;
    fib(n);
    return 0;
}