#include<stdio.h>
#include<stdlib.h>

int stack[100], choice, n, top, x, i;

void push(){
    if(top >= n-1){
        printf("stack is overflow\n");
    }
    else{
        printf("enter a value to be pushed: \n");
        scanf("%d", &x);
        top++;
        stack[top] = x;
    }
}

void pop(){
    if(top <= -1){
        printf("stack is under flow\n");
    }
    else{
        printf("\n\t the popped element is: %d\n", stack[top]);
        top--;
    }
}

void display(){
    if(top >= 0){
        printf("\n the elements in stack\n");
        for(i = top; i >= 0; i--){
            printf("\n%d", stack[i]);
        }
        printf("\n press next choice\n");
    }
    else{
        printf("\n the stack is empty");
    }
}

int main(){
    top = -1;
    printf("\n enter the size of stack[max=100]: ");
    scanf("%d", &n);

    printf("\n stack operations using array\n");
    printf("enter 1 to push:\n");
    printf("enter 2 to pull:\n");
    printf("enter 3 to display:\n");
    printf("enter 4 to exit:\n");

    do{
        printf("enter the choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1: 
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("\n\t exit point");
                break;

            default: 
                 printf("\n\t please enter a valid choice");
        }
    }
    while(choice != 4);
    return 0;
}

