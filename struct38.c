#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
}*head;

void createlist(int n){
    struct Node *newnode, *temp;
    int data, i;
    head = (struct Node*)malloc(sizeof(struct Node));
    if(head == NULL){
        printf("unable to allocate to memory");
    }else{
        printf("enter the data of node1: ");
        scanf("%d", &data);

        head->data = data;
        head->next = NULL;

        temp = head;
        for(i = 2; i <= n; i++){
            newnode = (struct Node*)malloc(sizeof(struct Node));
            if(newnode == NULL){
                printf("unable to allocate memory");
            }else{
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

void meanoflist(){
    int a[10];
    int i;
    struct Node *temp;

    if(head == NULL){
        printf("list is empty\n");
    }
    else{
        temp = head;
        int sum = 0, count = 0;
        float m;

        while(temp!=NULL){
            sum = sum + temp->data;
            temp = temp->next;
            count++;
        }
        m = sum / count;
        printf("\n mean is %f", m);
    }
}

void displaylist(){
    struct Node *temp;
    if(head == NULL){
        printf("list is empty\n");
    }
    else{
        temp = head;
        while(temp != NULL){
            printf("Data = %d\n", temp->data);
            temp = temp->next;
        }
    }
    printf("data in the list\n");
}

int main(){
    int n, choice;
    printf("enter the number of node: ");
    scanf("%d", &n);
    createlist(n);

    printf("data in the list\n");
    displaylist();

    printf("enter 1 to get the mean of list: ");
    scanf("%d", &choice);
    meanoflist();

    return 0;
}