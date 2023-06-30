#include<stdio.h>

int reverse(int arr[], int i, int n){
    for(int i = 0; i<n/2; i++){
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
          
    }
}

int main(){
    int n, i;
    printf("enter the size of array:");
    scanf("%d", &n);
    int arr[n];

    printf("enter the elements:");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    reverse(arr, 0, n);

    printf("After reversing the array:");
    for(int i = 0; i< n; i++){
        printf("%d", arr[i]);
    }
    return 0;
}