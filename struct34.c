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
    }
    else{
        printf("enter the the data of node1: ");
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
                printf("enter the data of node%d: ", i);
                scanf("%d", &data);

                newnode->data = data;
                newnode->next = NULL;

                temp->next = newnode;
                temp = temp->next;
            }
        }
    }
    printf("list is created successfully");
}

void reverselist(){
    struct Node *prevnode, *curnode;

    if(head != NULL){
        prevnode = head;
        curnode = head->next;
        head = head->next;

        prevnode->next = NULL;

        while(head != NULL){
            head = head->next;
            curnode->next = prevnode;

            prevnode = curnode;
            curnode = head;
        }
        head = prevnode;
        printf("successfully reversed list\n");
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
    int n, choice;
    printf("enter the number of nodes: ");
    scanf("%d", &n);
    createlist(n);

    printf("data in the list\n");
    displaylist();

    printf("enter 1 to reverse the list: ");
    scanf("%d", &choice);

    if(choice == 1){
        reverselist();
    }
    printf("Data in the list\n");
    displaylist();

    return 0;
}
