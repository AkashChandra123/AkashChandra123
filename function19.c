#include<stdio.h>
#include<math.h>

int sumseries(int n){
    int sum = 0;
    for(int i =1; i<=n; i++){
        sum = sum + pow(i, 2);
        printf("%d\n", sum);
    }
    return 0;
}

int main(){
    int n = 15;
    sumseries(n);
    printf("%d\n", n);
    return 0;
}