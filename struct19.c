#include<stdio.h>
#define MAX 100
int main(){
    int p1[MAX], p2[MAX], p3[MAX];
    int option;
    do{
        printf("\n1 : create 1st polynomial");
        printf("\n2 : create 2nd polynomial");
        printf("\n3 : Add polynomials");
        printf("\n4 : Multiply polynomial");
        printf("\n5 : Quit");
        printf("\nEnter your choice: ");
        scanf("%d", &option);
        switch(option){
            case1:read(p1);break;
            case2:read(p2);break;
            case3:add(p1,p2,p3);
                    printf("\n 1st polynomial ->");
                    print(p1);
                    printf("\n 2nd polynomial ->");
                    print(p2);
                    printf("\n Sum = ");
                    print(p3);
                    break;
            case4:multiply(p1,p2,p3);
                    printf("\n 1st polynomial ->");
                    print(p1);
                    printf("\n 2nd polynomial ->");
                    print(p2);
                    printf("\n product =");
                    print(p3);
                    break;
            case5:break;
            default:printf("Wrong Choice...\n");
        }
    }while(option!=5);
    return 0;
}

void init(int p[]){
    int i;
    for(i = 0; i < MAX; i++){
        p[i]= 0;
    }
}

void print(int p[]){
    int i;
    for(i = 0; i < MAX; i++){
        if(p[i]!=0){
            printf("%dX^%d ", p[i],i);
        }
    }
}

void read(int p[]){
    int n, i, power, coeff;
    init(p);
    printf("\nEnter number of terms:");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("\n Enter a term(power coeff)");
        scanf("%d%d", &power, &coeff);
        p[power] = coeff;
    }
}

void add(int p1[], int p2[], int p3[]){
    int i;
    for(i = 0; i < MAX; i++){
        p3[i] = p1[i] + p2[i];
    }
}

void multiply(int p1[], int p2[], int p3[]){
    int i, j;
    init(p3);
    for(i = 0; i < MAX; i++){
        for(j = 0; j < MAX; j++){
            p3[i+j] = p3[i+j]+p1[i]*p2[j];
        }
    }
}
