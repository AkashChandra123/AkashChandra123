#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next, *prev;
}*head, *last;

void createlist(int n){
    int data, i;
    struct Node *newnode;

    if(n >= 1){
        head = (struct Node*)malloc(sizeof(struct Node));

        printf("enter the data of Node1: ");
        scanf("%d", &data);

        head->data = data;
        head->next = NULL;
        head->prev = NULL;

        last = head;
        for(i = 2; i <= n; i++){
            newnode = (struct Node*)malloc(sizeof(struct Node));
            
            printf("enter the data of Node%d: ", i);
            scanf("%d", &data);

            newnode->data = data;
            newnode->next = NULL;
            newnode->prev = last;

            last->prev = newnode;
            last = newnode;
        }
        printf("double linked list is created.\n");
    }
}

void reverselist(){
    struct Node *temp, *curnode;

    curnode = head;
    while(curnode != NULL){
        temp = curnode->next;
        curnode->next = curnode->prev;
        curnode->prev = temp;

        curnode = temp;
    }

    temp = head;
    head = last;
    last = temp;
    
    printf("list is reversed successfully");
}

void displaylist(){
    struct Node *temp;

    int n = 1;

    if(head == NULL){
        printf("list is empty\n");
    }
    else{
        temp = head;
        printf("Data in the list: \n");

        while(temp != NULL)
        {
            printf("Data of %dnode = %d\n", n, temp->data);
            n++;
            temp = temp->next;   
        }
    }
}

int main(){
    int data, n, choice = 1;

    head = NULL;
    last = NULL;

    while(choice != 0){
        printf("enter 1 to create list:\n");
        printf("enter 2 to reverse the list:\n");
        printf("enterr 3 to display list:\n");
        printf("enter 0 to exit\n");

        printf("enter the choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1: 
                printf("enter the number of Nodes: ");
                scanf("%d", &n);
                createlist(n);
                displaylist();
                break;
            case 2: 
                reverselist();
                break;

            case 3:
                displaylist();
                break;

            case 0:
                break;

            default:
                printf("invalid choice");
        }
        printf("\n\n\n\n");
    }

    return 0;
}