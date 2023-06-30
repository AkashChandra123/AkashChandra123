#include<stdio.h>
int isvowel(char ch)
{
    int m=(int)ch;
if(m<=90 && m>=65 || m<=122 & m>=97)
{
 if(m== 65 || m==69 ||m== 73 || m==79 ||m==85  )//for capital
return 1;
    
else if(m==97 ||m==101 || m== 111 || m==105||m== 117 )//for small
return -1 ;
  
 else //for other alphabets
 return  0;
 
}
else // other characters
return -5;


}
    


int main(){
    char a;
    printf("ENTER A ALPHABET");
    scanf("%c",&a);
    if(isvowel(a)==1)
    printf("Character is uppercase Vowel");
     else if(isvowel(a)== -1)
    printf("Character is  lowercase Vowel");
    else if(isvowel(a)== 0)
    printf("Character is alphabet but not a vowel");
    else if (isvowel(a)== -5)
    printf("Charcter is not even an alphabet");
    return 0;
}