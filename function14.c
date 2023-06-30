#include<stdio.h>

int factors(int n) {
    for(int i=1; i<n; i++){
        if(n%i == 0){
            printf("%d\n", i);
        }
    }
}
int main(){
    printf("%d\n",factors(128));
    return 0;
}