#include<stdio.h>

int gcd(int a, int b){
    if(a == 0){
        return b;
    }
    else{
        gcd(b % a, a);
    }
}
int main(){
    int a = 12;
    int b = 14;
    printf("%d", gcd(a, b));
    return 0;
}
