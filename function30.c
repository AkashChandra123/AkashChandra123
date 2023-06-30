#include<stdio.h>

void printArray(int arr[], int i, int n){
    if(i>= n)
        return;
    printf("%d", arr[i]);
    printArray(arr, i+1, n);
    
}

int main(){
    int n, i;
    printf("enter your array size:");
    scanf("%d", &n);
    int arr[n];
    printf("enter the array element:");
    for (int i = 0; i< n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Array element are:");
    printArray(arr, 0, n);
}