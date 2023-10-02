#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
}*head;

void createlist(int n){
    int data, i;
    struct Node *newnode, *temp;
    head = (struct Node*)malloc (sizeof(struct Node));
    if (head == NULL){
        printf("unable to allocate memory");
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
                printf("unable to allocate memory");
            }
            else{
                printf("enter the data of node%d: ", i);
                scanf("%d", &data);
                newnode->data = data;
                newnode->next = NULL;

                temp->next  = newnode;
                temp = temp->next;
            }
        }
    }
    printf("successfully list is inserted");
}

int searchelement(int key, struct Node *curnode, int index){
    if(curnode == NULL){
        return -1;
    }
    else if(curnode->data == key){
        return index;
    }
    else{
        return searchelement(key, curnode->next, index+1);
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
    printf("\n");
}

int main(){
    int n, key, index;
    printf("enter the number of nodes: ");
    scanf("%d", &n);
    createlist(n);

    printf("Dat((a in the list\n");
    displaylist();

    printf("enter the element to search: ");
    scanf("%d", &key);
    index = searchelement(key, head, 0);

    if(index >= 0){
        printf("%d found in the list at position %d\n", key, index+1);
    }
    else{
        printf("%d  not found in the list", key);
    }
    return 0;
}