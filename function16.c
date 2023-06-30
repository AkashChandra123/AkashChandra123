#include<stdio.h>

int fact(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact = fact * i;
    }
    return fact;
}

int main(){
    int n = 6;
    printf("%d is factorial of a number", fact(n));
    return 0;
}