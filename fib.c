#include<stdio.h>
int main(){
    int a = 0;
    int b = 1;
    int sum;
    int n;
    printf("enter the size of series:");
    scanf("%d", &n);
    printf("%d\t %d\t", a , b);
    for(int i = 2; i < n; i++){
        sum = a + b;
        printf("%d\t", sum);
        a = b;
        b = sum;
    }
    return 0;
}