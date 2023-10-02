#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
}*head;

void createlist(int n){
    struct Node *newnode, *temp;
    int data, i;

    head = (struct Node*)malloc(sizeof(struct Node));

    if(head == NULL)
    {
        printf("unable to allocate memory");
    }

    else
    {
        printf("enter the data of node 1: ");
        scanf("%d", &data);

        head->data = data;
        head->next = NULL;

        temp = head;

        for(i = 2; i <= n; i++){
            newnode = (struct Node*)malloc(sizeof(struct Node));
            if(newnode == NULL)
            {
                printf("unable to allocate memory");
                break;
            }
            else{
                printf("enter the data of node %d: ", i);
                scanf("%d", &data);

                newnode->data = data;
                newnode->next = NULL;

                temp->next = newnode;
                temp = temp->next; 
            }
        }
    }
    printf("list is entered successfully\n");
}

void insertatposition(int data, int position){
        int i;
        struct Node *newnode, *temp;

    newnode = (struct Node*)malloc(sizeof(struct Node));

    if(newnode == NULL){
        printf("unable to allocate memory");
    }
    else{
        newnode->data = data;
        newnode->next = NULL;

        temp = head;

        for(i = 2; i <= position - 1; i++){
            temp = temp->next;

            if(temp == NULL){
                break;
            }
        }
        if(temp != NULL)
        {
            newnode->next = temp->next;

            temp->next = newnode;

            printf("Data inserted successfully\n");
        }
        else{
            printf("unable to insert");
        }
    }
}

void displaylist(){
    struct Node *temp;

    if(head == NULL){
        printf("list is empty");
    }
    else{
        temp = head;
        while(temp != NULL){
            printf("Data = %d\n", temp->data);
            temp = temp->next;
        }
    }
}

int main(){
    int n, data, position;

    printf("enter the number of nodes: ");
    scanf("%d", &n);
    createlist(n);

    printf("\nenter the data to be inserted at the middle: ");
    scanf("%d", &data);
    printf("enter the position to insert newnode: ");
    scanf("%d", &position);
    insertatposition(data, position);

    printf("\ndata in the list \n");
    displaylist();

    return 0;
}