#include<stdio.h>

int sum(int a, int b, int c)
{
    if(a>b && a>c && b>c){
    return (a +c);
    }

    else if (b>a && b>c && a>c)
    {
    return (b +c);
    }

    else if (c>a && c>b && b>a)
    {
    return (c+a);
    }
    else if(c>a && c<b){
        return (a+b);
    }
    else{
        return 0;
    }
}

int main(){
    int a = 43;
    int b = 67;
    int c = 65;

    printf("%d\n", sum(a, b, c));
}