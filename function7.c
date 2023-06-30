//write a program to print sum of first n natural numbers.
#include<stdio.h>
int sum(int n);

int main(){
    int n = 100;
    printf("sum is %d", sum(100));
    return 0;
}
int sum(int n){
    if(n == 1){
        return 1;
    }
    int sumNm1 = sum(n-1);
    int sumN = sumNm1 + n;
    return sumN;
}