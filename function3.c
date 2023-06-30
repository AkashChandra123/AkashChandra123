#include<stdio.h>

int sum(int a, int b){
    return a+b;
}

void print_table(int n){
    for(int i=1;i<=10;i++){
        printf("%d\n", 6*i);
    }
}

int main(){
    
    int a, b;
    
    printf("enter first number:");
    scanf("%d",&a);

    printf("enter second number:");
    scanf("%d",&b);
    
    int s = sum(a,b);
    
    printf("%d\n",s);
    int n = 6;
    
    print_table(n);
   
return 0;
}
