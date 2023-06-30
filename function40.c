#include<stdio.h>

int main(){
    int a[7] = {6,4,5,9,11,3,10};
    int i, j;
    int largestNum; 
    int smallestNum;
    //for(i = 0; i < 7; i++)
        //scanf("%d", &a[i]);
    for(i = 0; i < 7; i++){
    for(j = i; j < 7; j++){
        if(a[j] > a[i]){
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            }
        }
    }
    for(int i = 0; i < 7; i++){
        printf(" %d\t", a[i]);
    }
    printf("largestNum is: %d\n", a[0]);
    printf("smallestNum is: %d\n",a[6]);
    return 0;
}
