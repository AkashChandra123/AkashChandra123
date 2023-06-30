#include<stdio.h>
#include<string.h>

int main(){
    char str[50];
    int i = 0, wrd = 1;
    printf("enter the string is:");
    fgets(str, sizeof str, stdin);

    while(str[i] != '\0'){
        if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t'){
            wrd++;
        }
        i++;
    }
    printf("total num of word in string is: %d\n", wrd - 1);
    return 0;
}