#include<stdio.h>
#include<math.h>
void calc_value(float n);
int main(){
    float n;
    printf("enter number:");
    scanf("%f",&n);
    printf("%f",pow(n,2));
    return 0;
}