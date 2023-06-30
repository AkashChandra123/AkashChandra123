#include<stdio.h>
int main(){
    char p[100];
    printf("enter string 1 : ");
    scanf("%s",p);
    int count=0;
    for(int i=0;p[i]!='\0';i++){
        count++;
    }
    char q[100];
    printf("enter string 2 : ");
    scanf("%s",q);
    int count1=0;
    for(int i=0;q[i]!='\0';i++){
        count1++;
    }
    char r[100];
    for(int i=0;i<count;i++){
        r[i]=p[i];
    }
    for(int i=0;i<count1;i++){
        r[count]=q[i];
        count++;
    }
    printf("string1 + string 2 = ");
    printf("%s",r);
    return 0;
}