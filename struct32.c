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
        printf("enter the data of node1: ");
        scanf("%d", &data);

        head-> data = data;
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
    printf("\n list is created successfully\n");
}

void deletemiddlenode(int position){
    struct Node *todelete, *prevnode;
    int i;

    if(head == NULL){
        printf("list is empty");
    }
    else{
        todelete = head;
        prevnode = head;

        for(i = 2; i<= position; i++)
        {
            prevnode = todelete;
            todelete = todelete->next;

            if(todelete == NULL){
                break;
            }
        }
        if(todelete != NULL)
        {
            if(todelete == head){
                head = head->next;
            }
            prevnode->next = todelete->next;
            todelete->next = NULL;

            free(todelete);

            printf("successfully deleted node from middle");

        }
        else{
            printf("unable to delete that position");
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

        while(temp != NULL)
        {
            printf("Data = %d\n", temp->data);
            temp = temp->next;
        }
    }
}

int main(){
    int n, position;

    printf("enter the number of nodes: ");
    scanf("%d", &n);
    createlist(n);

    printf("\ndata in the list\n");
    displaylist();

    printf("enter the position to be deleted: ");
    scanf("%d", &position);
    deletemiddlenode(position);

    printf("\ndata in the list\n");
    displaylist();

    return 0;
}