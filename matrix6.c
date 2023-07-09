#include<stdio.h>
int main(){
    char str[80];
    int i, words = 0;
    printf("enter the string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++){
        if(str[i] == ' '){
            words++;
        }
    }
    printf("the number of words : %d", words + 1);
    return 0;

}