#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next, *prev;
}*head, *last;

void createlist(int n){
    int i, data;
    struct Node *newnode;

    if(n >=1){
        head = (struct Node*)malloc(sizeof(struct Node));

        if(head != NULL){
            printf("enter the data of node1: ");
            scanf("%d", &data);

            head->data = data;
            head->next = NULL;
            head->prev = NULL;

            last = head;

            for(i = 2; i <= n; i++){
                newnode = (struct Node*)malloc(sizeof(struct Node));

                if(newnode!= NULL){
                    printf("enter the data of node%d: ", i);
                    scanf("%d", &data);

                    newnode->data = data;
                    newnode->prev = last;
                    newnode->next = NULL;

                    last->next = newnode;
                    last = newnode;
                }
                else{
                    printf("unable to allocate memory");
                    break;
                }
            }
            printf("double link list created \n");
        }
        else{
            printf("unable to allocate memory");
        }
    }
}

void displaylistfromfirst(){
    struct Node* temp;
    int n = 1;

    if(head == NULL){
        printf("list is empty");
    }
    else{
        temp = head;
        while(temp != NULL){
            printf("Data of %d node = %d\n", n, temp->data);
            n++;
            temp = temp->next;
        }
    }
}

void displaylistfromlast(){
    struct Node* temp;
    int n = 0;
    if(last == NULL){
        printf("list is empty");
    }
    else{
        temp = last;
        printf("data in the list: ");

        while(temp != NULL){
            printf("Data of last %d node = %d\n", n, temp->data);
            n++;
            temp = temp->prev;
        }
    }
}

int main(){
    int n, choice;

    head = NULL;
    last = NULL;

    printf("enter the number of nodes: ");
    scanf("%d", &n);
    createlist(n);

    printf("press 1 to display list from first: \n");
    printf("press 2 to display list from end: \n");
    scanf("%d", &choice);

    if(choice == 1){
        displaylistfromfirst();
    }
    else if(choice == 2){
        displaylistfromlast();
    }
    return 0;
}