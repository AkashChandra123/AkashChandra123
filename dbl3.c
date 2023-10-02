#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next, *prev;
}*head, *last;

void createlist(int n){
    int data, i;
    struct Node *newnode, *temp;

    if(n >= 1){
        head = (struct Node*)malloc(sizeof(struct Node));
        
        printf("enter the of node1: ");
        scanf("%d", &data);

        head->data = data;
        head->next = NULL;
        head->prev = NULL;

        last = head;
        for(i = 2; i <=n; i++){
            newnode = (struct Node*)malloc(sizeof(struct Node));

            if(newnode != NULL){
                printf("enter the data of node%d: ", i);
                scanf("%d", &data);

                newnode->data = data;
                newnode->prev = last;
                newnode->next= NULL;

                last->next = newnode;
                last = newnode;
            }
        }
    }
    printf("double linked list created succesfully");
}

void deleteatfirst(){
    struct Node *todelete;

    if(head == NULL){
        printf("list is empty");
    }
    else{
        todelete = head;

        head = head->next;

        if(head != NULL){
            head->prev = NULL;
        }
        free(todelete);
        printf("successfully deleted from beginning");
    }
}

void deleteatlast(){
    struct Node *todelete;

    if(last == NULL){
        printf("unable to delete");
    }
    else{
        todelete = last;

        last = last->prev;

        if(last!= NULL){
            last->next = NULL;
        }
        free(todelete);
        printf("successfully deleted from last");
    }
}

void deleteatposition(int position){
    struct Node *curnode;

    int i;

    curnode = head;
    for(i = 1; i < position && curnode != NULL; i++){
        curnode = curnode->next;
    }
    if(position == 1){
        deleteatfirst();
    }
    else if(curnode == last){
        deleteatlast();
    }
    else if(curnode != NULL){
        curnode->prev->next = curnode->next;
        curnode->next->prev = curnode->prev;

        free(curnode);

        printf("successfully deleted from %d position \n", position);
    }
    else{
        printf("invalid position");
    }
}

void displaylist(){
    struct Node *temp;
    int n = 1;

    if(head == NULL){
        printf("list is empty");
    }
    else{
        temp = head;
        printf("Data in the list");

        while(temp != NULL){
            printf("Data of %d node = %d\n", n, temp->data);
            n++;

            temp = temp->next;
        }
    }
}

int main(){
    int data, position, n = 1, choice;
    head = NULL;
    last = NULL;

    while(choice != 0){
        printf("enter 1 to create list: \n");
        printf("enter 2 to delete first node: \n");
        printf("enter 3 to delete last node: \n");
        printf("enter 4 to delete node at position: \n");
        printf("enter 5 to display list: \n");
        printf("enter 0 to exit \n");

        printf("enter the choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1: 
                printf("enter the number of node: ");
                scanf("%d", &n);
                createlist(n);
                displaylist();
                break;
            
            case 2:
                deleteatfirst();
                displaylist();
                break;

            case 3: 
                deleteatlast();
                displaylist();
                break;

            case 4:
                printf("enter the position to delete: ");
                scanf("%d", &position);

                deleteatposition(position);
                displaylist();
                break;

            case 5: 
               displaylist();
               break;

            case 0:
                break;
            
            default:
                printf("invalid choice");
        }
        printf("\n\n\n\n\n");    
    }
    return 0;
}