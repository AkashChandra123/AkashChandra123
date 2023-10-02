#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
}*head;

void createlist(int n){
    struct Node *newNode, *temp;
    int data, i;
    head = (struct Node*)malloc(sizeof(struct Node));

    if(head == NULL){
        printf("unable to allocate memory");
        exit(0);
    }

    printf("enter the data of node1:");
    scanf("%d", &data);

    head->data = data;
    head->next = NULL;

    temp = head;
    for(i = 2; i <= n; i++){
        newNode = (struct Node*)malloc(sizeof(struct Node));

        if(newNode == NULL)
        {
            printf("unable to allocate memory: ");
            break;
        }

        printf("enter the data of node %d:", i);
        scanf("%d", &data);

        newNode->data = data;
        newNode->next = NULL;

        temp->next = newNode;
        temp = temp->next;
    }
}

void insertatbeginning(int data){
    struct Node *newnode;

    newnode = (struct Node*)malloc(sizeof(struct Node));

    if(newnode == NULL){
        printf("unable to allocate memory");
    }
    else{
        newnode->data = data;
        newnode->next = head;

        head = newnode;
        printf("Data inserted successfully\n");
    }
}

void displaylist(){
    struct node *temp;

    if(head == NULL){
        printf("list is empty");
        return;
    }
    else{
        //temp = head;
        while(head != NULL)
        {
            printf("Data = %d\n",head->data);
            head = head->next;
        }
    }
}

void createlist(int n);
void insertatbeginning();
void displaylist();

int main(){
    int n, data;
    printf("enter the number of nodes: ");
    scanf("%d", &n);

    createlist(n);

    printf("enter the data to insert at beginning:");
    scanf("%d", &data);
    insertatbeginning(data);

    printf("data in the list\n");
    displaylist();
    
    return 0;
}