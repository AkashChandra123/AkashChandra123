#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char str[50];
    int l, i;
    printf("input the string:");
    fgets(str, sizeof str, stdin);
    l = strlen(str);
    printf("string in reverse order:");
    for(int i = l; i > 0; i--){
        printf("%c ", str[i]);
    }
    printf("\n");
    return 0;

}