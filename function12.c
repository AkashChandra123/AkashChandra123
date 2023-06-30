#include<stdio.h>
#include<math.h>

int isPrime(int a);
int Armstrong(int a);
int isPerfect(int a);

int main() {
    int a = 12;
    if(isPrime(a)){
        printf("%d is prime", a);
    }
    else{
        printf("%d is not prime", a);
    }
    if(Armstrong(a)){
        printf("%d is armstrong num", a);
    }
    else{
        printf("%d is not armstrong num", a);
    }
    if(isPerfect(a)){
        printf("%d is perfect num", a);
    }
    else{
        printf("%d is not perfect num", a);
    }
}

int isPrime(int a){
    for(int i = 2; i<=14; i++){
        if(a%i == 0){
            return 0;
        }
    }
    return 1;
}

int Armstrong(int a){
    int sum = 0;
    int lastdigit, digit, originalnum;
     
    originalnum = a;
    digit = (int) log10(a) + 1;
    if(a>0){
        lastdigit = a%10;
        sum = sum + round(pow(lastdigit, digit));
        a = a/10;
    }
    return (originalnum == sum);
}

int isPerfect(int a){
    int sum = 0;
    for(int i = 1; i<a; i++){
        if(a%i == 0){
            sum = sum+i;
        }
    }
    return (a == sum);
}