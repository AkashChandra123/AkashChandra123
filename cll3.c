#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
}*head;

void createlist(int n){
    struct Node *newnode, *prevnode;
    int i, data;

    if(n >= 1){
        head = (struct Node*)malloc(sizeof(struct Node));

        printf("enter the data of node1: ");
        scanf("%d", &data);

        head->data = data;
        head->next = NULL;

        prevnode = head;
        for(i = 2; i <= n; i++){
            newnode = (struct Node*)malloc(sizeof(struct Node));

            printf("enter the data of node%d: ", i);
            scanf("%d", data);

            newnode->data = data;
            newnode->next = NULL;

            prevnode->next = newnode;
            prevnode = newnode;

        }
        prevnode->next = head;
        printf("circular list is created.");
    }
}

void deletelist(){
    int i, count = 0;
    int key;

    struct Node *prev, *curnode;

    if(head == NULL){
        printf("list is empty");
    }
    else{
        curnode = head;
        prev = curnode;

        while(prev->next != head){
            prev = prev->next;
            count++;
        }

        i = 0;
        while (i <= count)
        {
            if(curnode->data == key)
            {
                if(curnode->next != curnode)
                {
                    prev->next = curnode->next;
                }
                else{
                    prev->next = NULL;
                }
                if(curnode == head){
                    head = prev->next;
                }
                free(curnode);
            
                if(prev != NULL){
                    curnode = prev->next;
                }
                else{
                curnode = NULL;
                }
            }
            else{
                prev = curnode;
                curnode = curnode->next;
            }
            i++;
        }  
    }
}

void displaylist(){
    struct Node *curnode;

    int n = 1;

    if(head == NULL){
        printf("list is empty");
    }
    curnode = head;
    printf("data in the list:\n");

    do{
        printf("Data %d = %d\n", n, curnode->data);

        curnode = curnode->next;
        n++;
    }while(curnode != head);
}

int main(){
    int n, choice, key, data;

    head = NULL;

    while(choice != 0){
        printf("enter 1 to create list:\n");
        printf("enter 2 to display list: \n");
        printf("enter 3 to delete all by key:\n");
        printf("enter 0 to exit\n");

        printf("enter the choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("enter the number of node: ");
                scanf("%d", &n);
                createlist(n);
                break;

            case 2:
                displaylist();
                break;

            case 3:
                printf("enter key to delete from list: ");
                scanf("%d", &key);
                deletelist();
                break;

            case 0:
                exit(0);
                break;

            default:
                printf("invalid choice");
        }
        printf("\n\n\n\n\n\n");
    }
    return 0;
}