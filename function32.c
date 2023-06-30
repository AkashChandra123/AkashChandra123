#include<stdio.h>

int peakElement(int arr[], int i, int n){
    int peak = arr[0];
    for (int i = 0; i< n; i++){
        if((arr[i] >= arr[i-1] ) && (arr[i]>= arr[i+1])){
            peak = arr[i];
        }
    }
    printf("peak element in array is: %d", peak);
}

int main(){
    int n, i;
    printf("enter the size of array:");
    scanf("%d", &n);
    int arr[n];

    printf("enter the elements:");
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    peakElement( arr, 0, n);
    return 0;
}