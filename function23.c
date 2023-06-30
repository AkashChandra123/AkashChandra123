#include<stdio.h>

void funct(int n){
    if(n == 0){
        return;
        }
    else{
        funct(n - 1);
        printf("%d\n", n);
    }
}
 
int main(){
    int n = 5;
    funct(n);
    return 0;
} 
       