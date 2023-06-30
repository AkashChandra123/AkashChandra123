 #include<stdio.h>

 int main(){
    FILE *p = fopen("a.txt","r");
    if(p == NULL)
    return -1;
    while(1){
        char t = fgetc(p);
        if(t == EOF)
        break;
        printf("%c", t);
    }
    fclose(p);
    return 0;
 }