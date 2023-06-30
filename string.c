#include<stdio.h>
#include<string.h>

int countLength(char arr[]){
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++){
        count++;
    }
    return count - 1;
}
void printString(char arr[]){
    for(int i = 0; arr[i] != '\0'; i++){
        printf("%s", arr[i]);
    }
    printf("\n");
}
int main(){
    char name[] = "Akash";
    char newname[] = " Chandra";
    strcpy(newname, name);
    puts(newname);
    return 0;
}