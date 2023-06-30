#include<stdio.h>

int isPrime(int n){
    if(n == 0 || n==1){
        return 0;
    }
    for(int i = 2; i<=n/2; i++){
            if(n%i == 0)
                return 0;
            }
            return 1;
    }
   

int main(){
    int n = 50;
    for(int i=1; i<=n; i++){
    if(isPrime(i)){
    printf("%d is prime\n", i);
    }
    }
    return 0;
}