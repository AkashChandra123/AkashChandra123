#include<stdio.h>
void namaste();
void bonjour();

int main(){
    printf("enter f for French and i for Indian:");
    char ch;
    int i, f;
    scanf("%c",&ch);
    if(ch==i){
        namaste();
        }
    else{
        bonjour();
        }
return 0;
}
void namaste(){
    printf("Namaste\n");
}
void bonjour(){
    printf("Bonjour\n");
}