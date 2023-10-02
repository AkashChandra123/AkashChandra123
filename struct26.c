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

    if(head == NULL){
        printf("unable to allocate memory");
        exit(0);
    }
    printf("enter the data of node1: ");
    scanf("%d", &data);

    head->data = data;
    head->next = NULL;

    temp = head;
    for(i = 2; i<=n; i++){
        newnode = (struct Node*)malloc(sizeof(struct Node));
        if(newnode == NULL){
            printf("unable to allocate memory");
            break;
        }
        else{
            printf("enter the data of node%d: ", i);
            scanf("%d", &data);

            newnode->data = data;
            newnode->next = NULL;

            temp->next = newnode;
            temp = temp->next;
        }
    }
    printf("singly linked list created successfully");
}


void insertatend(int data){
    struct Node *newnode, *temp;
    newnode = (struct Node*)malloc(sizeof(struct Node));

    if(newnode == NULL){
        printf("unable to allocate memory");
    }
    else{
        newnode->data = data;
        newnode->next = NULL;
        
        temp = head;

        while(temp != NULL && temp->next != NULL){
            temp = temp->next;
        }
    
       temp->next = newnode;
       printf("data inserted successfully");
    }
}

void displaylist(){
    struct Node* temp;

    if(head == NULL){
        printf("list is empty");
    }
    else{
        temp = head;
        while(temp !=NULL){
            printf("Data = %d\n", temp->data);
            temp = temp->next;
        }
    }
}

int main(){
    int n, data;

    printf("enter the number of nodes: ");
    scanf("%d", &n);
    createlist(n);

    printf("\nenter the data to insert at the end of the list: ");
    scanf("%d", &data);
    insertatend(data);

    printf("Data in the list\n");
    displaylist();

    return 0;


}