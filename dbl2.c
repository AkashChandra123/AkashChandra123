#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next, *prev;
}*head, *last;

void createlist(int n){
    struct Node *newnode;
    int data, i;

    if(n >= 1)
    {
        head = (struct Node*)malloc(sizeof(struct Node));

        printf("enter the data of Node1: ");
        scanf("%d", &data);

        head->data = data;
        head->next = NULL;
        head->prev = NULL;

        last = head;
        for(i = 2; i <= n; i++){
            newnode = (struct Node*)malloc(sizeof(struct Node));
            
            printf("enter the data of node%d: ", i);
            scanf("%d", &data); 

            newnode->data = data;
            newnode->next = NULL;
            newnode->prev = last;

            last->next = newnode;
            last = newnode;
            
        }
        printf("Double linked list is created.\n");
    }
}

void insertatfirst(int data){
    struct Node *newnode;
    if(head == NULL){
        printf("list is empty");
    }
    else{
        newnode = (struct Node*)malloc(sizeof(struct Node));

        newnode->data = data;
        newnode->next = head;
        newnode->prev = NULL;

        head->prev = newnode;
        head = newnode;

        printf("Node inserted successfully");
    }
}

void insertatend(int data){
    struct Node *newnode;

    if(head == NULL){
        printf("list is empty");
    }
    else{
        newnode = (struct Node*)malloc(sizeof(struct Node));

        newnode->data = data;
        newnode->next = NULL;
        newnode->prev = last;

        last->next = newnode;
        last = newnode;

        printf("Node inserted at the end successfully");
    }
}

void insertatposition(int data, int position){
    struct Node *newnode, *temp;
    int i;

    if(head == NULL){
        printf("list is empty");
    }
    else{
        temp = head;
        i = 1;

        while(i < position-1 && temp != NULL)
        {
            temp = temp->next;
            i++;
        }
        if(position == 1){
            insertatfirst(data);
        }
        else if(temp == last){
            insertatend(data);
        }
        else if(temp != NULL){
            newnode = (struct Node*)malloc(sizeof(struct Node));

            newnode->data = data;
            newnode->next = temp->next;
            newnode->prev = temp;

            if(temp->next != NULL){
                temp->next->prev = newnode;
            }
            temp->next = newnode;

            printf("node inserted at %d position\n", position);
        }
        else{
            printf("invalid position\n");
        }
    }
}

void displaylist(){
    struct Node *temp;

    int n = 1; 

    if(head == NULL){
        printf("list is empty");
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
    int n, choice = 1, data, position;
    
    head = NULL;
    last = NULL;

    while(choice != 0){
        printf("enter 1 to create double linked list: \n");
        printf("enter 2 to insert at beginning: \n");
        printf("enter 3 to insert at end: \n");
        printf("enter 4 to insert at position: \n");
        printf("enter 5 to display list: \n");
        printf("enter 0 to exit: \n");

        printf("enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("enter the number of nodes: ");
                scanf("%d", &n);

                createlist(n);
                displaylist();

            case 2:
                printf("enter the data to insert at first: ");
                scanf("%d", &data);

                insertatfirst(data);
                displaylist();
                break;
        
            case 3:
                printf("enter the data to insert at end: ");
                scanf("%d", &data);

                insertatend(data);
                displaylist();
                break;
        
            case 4: 
                printf("enter the position to insert data: ");
                scanf("%d", &position);

                printf("enter the data of node: ");
                scanf("%d", &data);

                insertatposition(data, position);
                displaylist();
                break;
            
            case 5: 
                displaylist();
                break;

            case 0:
                break;
            default:
                printf("invalid choice");
        }
        printf("\n\n\n\n\n\n\n");
    }
    return 0;
}