#include<stdio.h>
int main(){
    int a, reverse = 0, remainder;
    printf("enter a number:");
    scanf("%d", &a);
    while(a != 0){
        remainder = a % 10;
        reverse = reverse *10 + remainder;
        a = a/ 10;
    }
    printf("reverse num is: %d", reverse);
    return 0;
}