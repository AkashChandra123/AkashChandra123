#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
}*head;

void createlist(int n){
    struct Node *newNode, *temp;
    int data, i;
    head = (struct Node*)malloc(sizeof(struct Node));

    if(head == NULL){
        printf("unable to allocate memory");
        exit(0);
    }

    printf("enter the data of node1:");
    scanf("%d", &data);

    head->data = data;
    head->next = NULL;

    temp = head;
    for(i = 2; i <= n; i++){
        newNode = (struct Node*)malloc(sizeof(struct Node));

        if(newNode == NULL)
        {
            printf("unable to allocate memory: ");
            break;
        }

        printf("enter the data of node %d:", i);
        scanf("%d", &data);

        newNode->data = data;
        newNode->next = NULL;

        temp->next = newNode;
        temp = temp->next;
    }
}

void traverselist(){
    struct node *temp;

    if(head == NULL){
        printf("list is empty");
        return;
    }

    //temp = head;
    while(head != NULL)
    {
        printf("Data = %d\n", head->data);
        head = head->next;
    }
}

void createlist(int n);
void traverselist();

int main(){
    int n;
    printf("enter the number of nodes: ");
    scanf("%d", &n);

    createlist(n);

    printf("\nData in the list \n");
    traverselist();
    
    return 0;
}