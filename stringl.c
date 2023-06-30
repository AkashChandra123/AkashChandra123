#include<stdio.h>
#include<stdlib.h>

int main(){
    char name[100];
        int l = 0;

    printf("input the string:");
    fgets(name, sizeof name, stdin);
    while(name[l] != '\0'){
        printf("%c ", name[l]);
        l++;
    }
    printf("\n");
    return 0;
}