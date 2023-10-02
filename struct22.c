#include <stdio.h>
#include <stdlib.h>
 
// Linked List Node
struct node {
    int info;
    struct node* link;
};
struct node* start = NULL;
 
// Function to create list with n nodes initially
void createList()
{
    if (start == NULL) {
        int n;
        printf("\nEnter the number of nodes: ");
        scanf("%d", &n);
        if (n != 0) {
            int data;
            struct node* newnode;
            struct node* temp;
            newnode = malloc(sizeof(struct node));
            start = newnode;
            temp = start;
            printf("\nEnter number to"
                " be inserted : ");
            scanf("%d", &data);
            start->info = data;
 
            for (int i = 2; i <= n; i++) {
                newnode = malloc(sizeof(struct node));
                temp->link = newnode;
                printf("\nEnter number to"
                    " be inserted : ");
                scanf("%d", &data);
                newnode->info = data;
                temp = temp->link;
            }
        }
        printf("\nThe list is created\n");
    }
    else
        printf("\nThe list is already created\n");
}
 
// Function to traverse the linked list
void traverse()
{
    struct node* temp;
 
    // List is empty
    if (start == NULL)
        printf("\nList is empty\n");
 
    // Else print the LL
    else {
        temp = start;
        while (temp != NULL) {
            printf("Data = %d\n", temp->info);
            temp = temp->link;
        }
    }
}

int main(){
    createList();
    printf("Data in the list \n");
    traverse();

    return 0;
}