#include<stdio.h>
#include<stdlib.h>

struct Node{
    int coef;
    int exp;
    struct Node *next;
}*head;

void createpoly(){
    int i, n;
    struct Node *newnode, *temp;
    int ch = 1;
    while(ch){
        for(i = 0; i< n; i++){
            newnode = (struct Node*)malloc(sizeof(struct Node));
            printf("enter the coefficient: ");
            scanf("%d", &newnode->coef);
 
            printf("enter the exponent: ");
            scanf("%d", &newnode->exp);

            newnode->next = NULL;
            if(head ==NULL)
                head = newnode;
            else
                temp->next = newnode;
            temp = newnode;
            printf("Any more node to be added(1/0): ");
            scanf("%d", ch);
        }
    }
}

void displaypoly(){
    struct Node *curnode = head;
    while(curnode != NULL){
        printf("%d x^%d +", curnode->coef, curnode->exp);
        curnode = curnode->next;
    }
}

int main(){
    int i, n;
    printf("enter the number of nodes: ");
    scanf("%d", &n);
    createpoly();

    printf(" first polynomial: ");
    displaypoly();

    return 0;
}