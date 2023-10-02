#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
}*head;

void createlist(int n){
    int data, i;
    struct Node *newnode, *temp;
    head = (struct Node*)malloc(sizeof(struct Node));
    if(head == NULL){
        printf("unable to allocate memory");
    }
    else{
        printf("enter the the data of node1: ");
        scanf("%d", &data);

        head->data = data;
        head->next = NULL;

        temp = head;
        for(i = 2; i <= n; i++){
            newnode = (struct Node*)malloc(sizeof(struct Node));
            if(newnode == NULL){
                printf("unable to allocate to memory");
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
    }
    printf("list is inserted successfully");
}

void maximumelement(){
    int a[10];
    int i;
    struct Node *temp;
    if(head == NULL){
        printf("list is empty\n");
    }
    else{
        temp = head;
        int max = temp->data;

        while(temp != NULL){
            if(max < temp->data){
                max = temp->data;
            }
            temp = temp->next;
        }
        printf("\nMaximum number is : %d", max);
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
    printf("Data in the list\n");
}

int main(){
    int n, choice;
    printf("enter the number of nodes: ");
    scanf("%d", &n);
    createlist(n);

    printf("Data in the list\n");
    displaylist();

    printf("enter 1 to check the maximum  element in list: ");
    scanf("%d", &choice);
    maximumelement();

    return 0;
}