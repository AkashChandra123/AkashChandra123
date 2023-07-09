#include<stdio.h>
int main(){
    int arr[10][10], transpose[10][10];
    int i, j, m, n;

    printf("enter the number of rows: ");
    scanf("%d", &m);
    printf("enter the number of columns: ");
    scanf("%d", &n);
    
    printf("\nenter the elements of matrix\n");
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("enter the data in [%d][%d]: ", i, j);
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
        for(j = 0; j < n; j++){
            transpose[j][i] = arr[i][j];
        }
    }
    
    printf("\nTranspose matrix\n");

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}