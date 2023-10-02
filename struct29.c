#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;

    struct Node *next;
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
        head->next =    NULL;

        temp = head;
        for(i = 2; i <= n; i++){
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

void deleteendnode(){
    struct Node *todelete, *secondlastnode;

    if(head == NULL){
        printf("list is empty");
    }
    else{
        todelete = head;
        secondlastnode = head;

        while(todelete->next != NULL){
            secondlastnode = todelete;
            todelete = todelete->next;
        }
        if(todelete == head){
            head = NULL;
        }
        else{
            secondlastnode->next = NULL;
        }
        free(todelete);

        printf("Successfully deleted last node");
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

    printf("enter the total number of nodes: ");
    scanf("%d", &n);
    createlist(n);

    printf("\ndata in the list \n");
    displaylist();

    printf("press1 to delete last node: ");
    scanf("%d", &choice);

    if(choice == 1)
        deleteendnode();
    
    printf("\n data in the list \n");
    displaylist();


    return 0;
}