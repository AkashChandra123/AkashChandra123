#include<stdio.h>

int main() {
    int b = 12;

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i<10;i++) {
        if (arr[0] + arr[9-i] == b) {

            printf("%d %d", arr[0], arr[9-i]);
            i++;
            }
        if (arr[0] + arr[9-i] <=b){
            arr[0+i];
            i++;
            printf("%d", arr[0+i], arr[9]);
        }
    }       
    printf("\n");
    return 0;  
}