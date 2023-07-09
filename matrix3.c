#include<stdio.h>
int main(){
    int arr[10][10];
    int i, j, m, n,sumD;
    
    printf(" enter the number of rows: ");
    scanf("%d", &m);
    printf("enter the number of columns: ");
    scanf("%d", &n);

    for (i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\n");

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    sumD = 0;
    for(i = 0; i < m; i++){
        sumD += arr[i][i];
    }
    printf(" sum of diagonal elements = %d", sumD);
    return 0;
}