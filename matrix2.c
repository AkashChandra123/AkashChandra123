#include<stdio.h>
int main(){
    int arr[10][10];
    int i, j, m, n;
    int sumR, sumC;

    printf("enter the number of rows: ");
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

    for(i = 0; i < m; i++){
        sumR = 0;
        for(j = 0; j < n; j++){
            sumR += arr[i][j];
        }
        printf("sum of row %d = %d\n", i + 1, sumR);
    }
    printf("\n");

    for( i = 0; i < m; i++){
        sumC = 0;
        for(j = 0; j < n; j++){
            sumC += arr[j][i];
        }
        printf("sum of column %d = %d\n", i + 1, sumC);
    }
    return 0;
}