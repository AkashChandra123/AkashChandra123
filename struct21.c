#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int coef;
    int exp;
    struct Node* next;
} Node;

void insert(Node** poly, int coef, int exp){
    Node* temp = (Node*) malloc (sizeof(Node));
    temp->coef = coef;
    temp->exp = exp;
    temp->next = NULL;

    if(*poly == NULL || (*poly)->exp < exp){
        temp->next = *poly;
        *poly = temp;
    }else{
        Node* current = *poly;
        while(current->next != NULL && current->next->exp >= exp){
            current = current->next;
        }
    }
}