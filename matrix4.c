#include<stdio.h>
void input(int matrix[][10], int);
void display(int matrix[][10], int);
void upper_half(int matrix[][10], int);

int main(){
    int s; int array[10][10];
    printf("enter the size of matrix: ");
    scanf("%d",&s);
    input(array, s);
    printf("\n");
    display(array, s);
    printf("\n");
    upper_half(array, s);

    return 0;
}

void input(int matrix[][10], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("enter the data[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void display(int matrix[][10], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void upper_half(int matrix[][10], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i <= j){
                printf("%d\t", matrix[i][j]);
            }
            else{
                printf("\t");
            }
        }
        printf("\n");
    }
}