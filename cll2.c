#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
}*head;

void createlist(int n){
    int i, data;
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

            printf("enter the data of node%d: ", i);
            scanf("%d", &data);

            newnode->data = data;
            newnode->next = NULL;

            prevnode->next = newnode;
            prevnode = newnode;
        }
        prevnode->next = head;
        printf("circular list is created \n");
    }
}
void insertatfirst(int data){
    struct Node *newnode, *curnode;

    if(head == NULL){
        printf("list is empty\n");
    }
    else{
        newnode = (struct Node*)malloc(sizeof(struct Node));

        newnode->data = data;
        newnode->next = head;

        curnode = head;
        while(curnode->next != head){
            curnode = curnode->next;
        }
        curnode->next = newnode;

        head = newnode;

        printf("Node inserted successfully\n");
    }
}

void insertatposition(int data, int position){
    struct Node *newnode, *curnode;

    int i;
    if(head == NULL){
        printf("list is empty\n");
    }
    else if(position == 1){
        insertatfirst(data);
    }
    else{
        newnode = (struct Node*)malloc(sizeof(struct Node));

        newnode->data = data;
        
        curnode = head;
        for(i = 2; i <= position -1; i++){
            curnode = curnode->next;
        }
        newnode->next = curnode->next;
        curnode->next = newnode;

        printf("Node inserted successfully\n");
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
    int n, choice = 1;
    int data, position;

    head = NULL;

    while(choice != 0){
        printf("enter 1 to create list:\n");
        printf("enter 2 to insert at first: \n");
        printf("enter 3 to insert at position:\n");
        printf("enter 4 to display:\n");
        printf("enter 0 to exit\n");

        printf("enter the choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("enter number of nodes: ");
                scanf("%d", &n);
                createlist(n);
                displaylist();
                break;

            case 2:
                printf("enter the data to be inserted: ");
                scanf("%d", &data);
                insertatfirst(data);
                displaylist();
                break;

            case 3:
                printf("Enter the position: \n");
                scanf("%d", &position);
                printf("enter the data : ");
                scanf("%d", &data);
                insertatposition(data, position);
                displaylist();
                break;

            case 4:
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
