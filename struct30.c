#include<stdio.h>
#include<ctype.h>

#define MAX 100

typedef struct {
    int data59[MAX];
    int top59;
} Stack;

void initialize59(Stack *s) {
    s->top59 = -1;
}

int isEmpty59(Stack *s) {
    return s->top59 == -1;
}

int isFull59(Stack *s) {
    return s->top59 == MAX - 1;
}

void push59(Stack *s, int item) {
    if (isFull59(s)) {
        printf("Stack Overflow\n");
        return;
    }
    s->data59[++(s->top59)] = item;
}

int popo59(Stack *s) {
    if (isEmpty59(s)) {
        printf("Stack Underflow\n");
        return -1;
    }
    return s->data59[(s->top59)--];
}

int evaluatepostfix59(char *exp) {
    Stack s;
    initialize59(&s);
    
    while (*exp) {
        if (isdigit(*exp)) {
            push59(&s, *exp - '0');
        } else if (*exp == '+' || *exp == '-' || *exp == '*' || *exp == '/') {
            int operand2 = popo59(&s);
            int operand1 = popo59(&s);
            
            switch (*exp) {
                case '+':
                    push59(&s, operand1 + operand2);
                    break;
                case '-':
                    push59(&s, operand1 - operand2);
                    break;
                case '*':
                    push59(&s, operand1 * operand2);
                    break;
                case '/':
                    push59(&s, operand1 / operand2);
                    break;
            }
        } else {
            printf("Invalid character: %c\n", *exp);
            return -1;
        }
        
        exp++;
    }
    
    return popo59(&s);
}

int main() {
    char exp[MAX] = "100 200 + 2 / 5 * 7 +";
    
    int result = evaluatepostfix59(exp);
    
    if (result != -1) {
        printf("The result of the expression %s is %d\n", exp, result);
    }
    
    return 0;
}