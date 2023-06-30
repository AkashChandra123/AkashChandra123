#include<stdio.h>

void even(int a);
void odd(int a);

int main() {
    int a = 21;
    if (a%2 == 0){
        even(a);
    }
    else{
        odd(a);
    }
}

void even(int a) {
    printf("even num is %d", a);
}

void odd(int a) {
    printf("odd num is %d", a);
}