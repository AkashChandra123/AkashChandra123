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

        head->data = data;
        head->next = NULL;

        temp = head; 
        for(i = 2; i<= n; i++){
            newnode = (struct Node*)malloc(sizeof(struct Node));

            if(newnode == NULL){
                printf("unable to allocate memory");
            }
            else{
                printf("Enter the data of node%d: ", i);
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

int searchelement(int key){
    int index;
    struct Node *curnode;

    index = 0;
    curnode = head;

    while(curnode != NULL && curnode->data != key){
        index++;
        curnode = curnode->next;
    }
    return (curnode != NULL) ? index: -1;
}

void displaylist(){
    struct Node *temp;
    if(head == NULL){
        printf("list is empty\n");
    }
    temp = head;
    while(temp != NULL){
        printf("Data = %d\n", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main(){
    int n, keytosearch, index;
    printf("enter the number of nodes: ");
    scanf("%d", &n);
    createlist(n);

    printf("Data in the list\n");
    displaylist();

    printf("enter the element to search: ");
    scanf("%d", &keytosearch);

    index = searchelement(keytosearch);

    if(index >= 0){
        printf("%d found in the list at position %d\n", keytosearch, index+1);
    }
    else{
        printf("%d not found in the list\n", keytosearch);
    }
    return 0;
}