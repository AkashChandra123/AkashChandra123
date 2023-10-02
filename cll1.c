#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
}*head;

void createlist(int n){
    int data, i;
    struct Node *newnode, *prevnode;

    if(n >= 1){
        head = (struct Node*)malloc(sizeof(struct Node));

        printf("enter the data of Node1: ");
        scanf("%d", &data);

        head->data = data;
        head->next = NULL;

        prevnode = head;
        for(i = 2; i <= n; i++){
            newnode = (struct Node*)malloc(sizeof(struct Node));

            printf("enter the data of %d node: ", i);
            scanf("%d", &data);

            newnode->data = data;
            newnode->next = NULL;

            prevnode->next = newnode;
            prevnode = newnode;
        }
        prevnode->next = head;

        printf("Circular list is created.\n");
    }
}

void displaylist(){
    struct Node *curnode;
    int n = 1;

    if(head == NULL){
        printf("list is empty\n");
    }
    else{
        curnode = head;
        printf("Data in the list\n");
        
        do{
            printf("Data %d = %d\n", n, curnode->data);
            curnode = curnode->next;
            n++;
        }while(curnode != head);
    }
}

int main(){
    int data, n, choice = 1;

    head = NULL;

    while(choice != 0){
        printf("enter 1 to create circular list: \n");
        printf("enter 2 to display the list: \n");
        printf("enter 0 to exit: \n");

        printf("enter the choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1: 
                printf("enter the number of nodes: ");
                scanf("%d", &n);
                createlist(n);
                break;

            case 2:
                displaylist();
                break;

            case 0:
                break;

            default:
                printf("invalid choice");
        }
        printf("\n\n\n\n\n");
    }
    return 0;
}

