#include<stdio.h>
int displaynum(int n){
    if(n==0){
        return;
    }
else{
    display_num(n-1);
    printf("%d",n)
    }
}
int main(){
    int n;
    printf("enter a positive integer:");
    scanf("%d",&n);
    printf("%d\n",n);
    displaynum(n);
    return 0;
}