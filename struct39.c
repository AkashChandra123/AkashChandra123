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
        printf("unable to create memory");
    }
    else{
        printf("enter the data of node1: ");
        scanf("%d", &data);

        head->data = data;
        head->next = NULL;

        temp = head;
        for(i = 2; i <= n; i++){
            newnode = (struct Node*)malloc(sizeof(struct Node));
            if(newnode == NULL){
                printf("unable to aloocate memory");
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
    printf("successfully list is created");
}

void sortlist(){
    struct Node *current = head;
    struct Node *index = NULL;
    int temp;

    if(head == NULL){
        return;
    }
    else{
        while(current != NULL)
        {
            index = current->next;
            while(index != NULL){
                if(current->data > index->data){
                    temp = current->data;
                    current->data = index->data;
                    index->data = temp;
                }
                index = index->next;
            }
            current = current->next;
        }
    }
}

void displaylist(){
    struct Node *temp;
    if(head == NULL){
        printf("list is empty");
    }else{
        temp = head;
        while(temp !=NULL){
            printf("Data = %d\n", temp->data);
            temp = temp->next;
        }
    }
    printf("Data inserted in list successfully\n");
}

int main(){
    int n, choice;
    printf("Enter number of data in node: ");
    scanf("%d", &n);
    createlist(n);

    printf("Data in the list: ");
    displaylist();

    printf(" enter 1 to sort the data: ");
    scanf("%d", &choice);
    sortlist();

    printf("Data in the list after sort:");
    displaylist();

    return 0;
}