#include<stdio.h>
#include<math.h>

int isPerfect(int n);
int Armstrong(int n);

int main(){
    int n = 12;
    if(Armstrong(n)){
        printf("%d is Armstrong number ", n);
    }
    else{
        printf("%d\n is not Armstrong number", n);
    }

    if(isPerfect(n)){
        printf("%d\n is Perfect num ", n);
    }
    else{
        printf("%d\n is not Perfect num", n);
    }
}

int Armstrong(int n)
{
    int digit, lastdigit, originalnum;
    int sum = 0;
    originalnum = n;
    digit = (int) log10(n) +1;

    if(n>0){
        lastdigit = n % 10;
        sum = sum + round(pow(lastdigit, digit));
        n = n/10;
        }
        return (originalnum = sum);
    }

int isPerfect(int n){
    int sum = 0;
    for( int i = 1; i< n; i++){
        if(n%i == 0){
            sum = sum + i;
        }

    }
    return (n == sum);
}
