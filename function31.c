#include<stdio.h>

int maximum(int arr[], int i, int n);
int minimum(int arr[], int i, int n);

int main(){
    int n, i;
    printf("enter the size of array:");
    scanf("%d", &n);
    int arr[n];

    printf("enter the elements:");

    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    maximum(arr, 0, n);
    minimum(arr, 0, n);
    //printf("enter the maximum element in array: %d", max);
    //printf("enter the minimum element in array: %d", min);
    return 0;
}

int maximum(int arr[], int i, int n){
    int maximum = arr[0];
    for (int i = 0; i< n; i++){
    if(arr[i]> arr[0]){
        maximum = arr[i];
    }
}
printf("maximum element is: %d", maximum);
}

int minimum(int arr[], int i, int n){
    int minimum = arr[0];
    for (int i = 0; i< n; i++){
        if(arr[i] < arr[0]){
        minimum = arr[i];
        }
    }
    printf("minimum element is : %d", minimum);
}