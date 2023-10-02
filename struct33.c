#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data; 
    struct Node* next;
}*head;

void createlist(int n){
    struct Node *newnode, *temp;
    int i, data;

    head = (struct Node*)malloc(sizeof(struct Node));

    if(head == NULL){
        printf("unable to allocate memory");
    } 
    else{
        printf("enter the data of node1: ");
        scanf("%d", &data);

        head->data = data;
        head->next = NULL;

        temp = head;
        for(i = 2; i<= n; i++){
            newnode = (struct Node*)malloc(sizeof(struct Node));
            if(newnode == NULL){
                printf("unable to allocate memory");
            }
            else{
                printf("enter the the data of node%d: ", i);
                scanf("%d", &data);

                newnode->data = data;
                newnode->next = NULL;

                temp->next = newnode;
                temp = temp->next;
            }
        }
    }
    printf("successfully list is created ");
}

void deletelist(){
    struct Node* temp;

    while(head != NULL){
        temp = head;
        head = head->next;

        free(temp);
    }
    printf("successfully deleted all nodes");
}

void displaylist(){
    struct Node* temp;

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
    int n, choice;
    printf("enter the number of nodes: ");
    scanf("%d", &n);
    createlist(n);

    printf("\ndata in the list\n");
    displaylist();

    printf("enter 1 to delete the entire list: ");
    scanf("%d", &choice);
    deletelist();

    printf("\n data in the list\n");
    displaylist();

    return 0;
}