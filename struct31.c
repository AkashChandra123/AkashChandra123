#include <stdio.h>
#include <stdlib.h>

// Structure to represent a stack
struct Stack {
    unsigned capacity;
    int top;
    int* array;
};

// Function to create a stack of given capacity
struct Stack* createStack(unsigned capacity) {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int*)malloc(stack->capacity * sizeof(int));
    return stack;
}

// Function to check if a stack is empty
int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

// Function to check if a stack is full
int isFull(struct Stack* stack) {
    return stack->top == stack->capacity - 1;
}

// Function to push an item to a stack
void push(struct Stack* stack, int item) {
    if (isFull(stack)) {
        printf("Stack overflow!\n");
        return;
    }
    stack->array[++stack->top] = item;
}

// Function to pop an item from a stack
int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow!\n");
        return -1;
    }
    return stack->array[stack->top--];
}

// Function to move a disk from one peg to another
void moveDisk(char fromPeg, char toPeg, int disk) {
    printf("Move disk %d from peg %c to peg %c\n", disk, fromPeg, toPeg);
}

// Function to implement the Tower of Hanoi problem using stacks
void towerOfHanoi(int numDisks, struct Stack* source, struct Stack* auxiliary, struct Stack* target) {
    int totalMoves = (1 << numDisks) - 1;  // Total number of moves required

    // If the number of disks is even, swap auxiliary and target stacks
    if (numDisks % 2 == 0) {
        struct Stack* temp = auxiliary;
        auxiliary = target;
        target = temp;
    }

    for (int i = numDisks; i >= 1; i--) {
        push(source, i);  // Push all disks onto the source stack
    }

    for (int move = 1; move <= totalMoves; move++) {
        if (move % 3 == 1) {  // Move disk from source to target peg
            if (isEmpty(source)) {
                push(source, pop(target));
                moveDisk('T', 'S', source->array[source->top]);
            } else if (isEmpty(target)) {
                push(target, pop(source));
                moveDisk('S', 'T', target->array[target->top]);
            } else if (source->array[source->top] < target->array[target->top]) {
                push(target, pop(source));
                moveDisk('S', 'T', target->array[target->top]);
            } else {
                push(source, pop(target));
                moveDisk('T', 'S', source->array[source->top]);
            }
        } else if (move % 3 == 2) {  // Move disk from source to auxiliary peg
            if (isEmpty(source)) {
                push(source, pop(auxiliary));
                moveDisk('A', 'S', source->array[source->top]);
            } else if (isEmpty(auxiliary)) {
                push(auxiliary, pop(source));
                moveDisk('S', 'A', auxiliary->array[auxiliary->top]);
            } else if (source->array[source->top] < auxiliary->array[auxiliary->top]) {
                push(auxiliary, pop(source));
                moveDisk('S', 'A', auxiliary->array[auxiliary->top]);
            } else {
                push(source, pop(auxiliary));
                moveDisk('A', 'S', source->array[source->top]);
            }
        } else {  // Move disk from auxiliary to target peg
            if (isEmpty(auxiliary)) {
                push(auxiliary, pop(target));
                moveDisk('T', 'A', auxiliary->array[auxiliary->top]);
            } else if (isEmpty(target)) {
                push(target, pop(auxiliary));
                moveDisk('A', 'T', target->array[target->top]);
            } else if (auxiliary->array[auxiliary->top] < target->array[target->top]) {
                push(target, pop(auxiliary));
                moveDisk('A', 'T', target->array[target->top]);
            } else {
                push(auxiliary, pop(target));
                moveDisk('T', 'A', auxiliary->array[auxiliary->top]);
            }
        }
    }
}

int main() {
    int numDis

