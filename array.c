#include<stdio.h>
int main(){
    int a[6][5];
    for(int i = 0; i < 6; i++){
        for(int j = 0; j< 5; j++){
            scanf("%d", a[i][j]);
        }
    }
    printf("entered array:");
    return 0;
}