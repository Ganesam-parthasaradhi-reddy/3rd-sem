// #include<stdio.h>
// #include<stdlib.h>
// struct node{
//     int data;
//     struct node *next;
// };
// int main()
// {
//     int n,value,i,temp;
//     scanf("%d",&n);
//     struct node *head=(struct node)(malloc(sizeof(struct node)));
//     struct node *temp=head;
//     for(i=0;i<n;i++)
//     {
//         int value=0;
//         scanf("%d",&value);
//         struct node newnode=(struct node)(malloc(sizeof(struct node)));
//         newnode->data=value;
//         newnode->next=NULL;
//         temp->next=newnode;
//         temp->next;
//     }
//     temp=head;
//     while(temp)
//     {
//         printf("%d",temp->data);
//         temp->next;
//     }
//     return 0;

// }
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 100
typedef struct {
    int data[MAX];
    int top;
} Stack;
void init(Stack *s) {
    s->top = -1;
}
int isEmpty(Stack *s) {
    return s->top == -1;
}
void push(Stack *s, int value) {
    if (s->top == MAX - 1) {
        printf("Stack Overflow\n");
        exit(1);
    }
    s->data[++s->top] = value;
}
int pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack Underflow\n");
        exit(1);
    }
    return s->data[s->top--];
}
int evaluatePostfix(char *expr) {
    Stack s;
    init(&s);

    for (int i = 0; expr[i] != '\0'; i++) {
        if (isdigit(expr[i])) {
            push(&s, expr[i] - '0');
        }
        else {
            int op2 = pop(&s);
            int op1 = pop(&s);

            switch (expr[i]) {
                case '+': push(&s, op1 + op2); break;
                case '-': push(&s, op1 - op2); break;
                case '*': push(&s, op1 * op2); break;
                case '/': push(&s, op1 / op2); break;
                default:
                    printf("Invalid operator\n");
                    exit(1);
            }
        }
    }
    return pop(&s);
}

int main() {
    char expr[MAX];
    printf("Enter a postfix expression: ");
    scanf("%s", expr);
    int result = evaluatePostfix(expr);
    printf("Result: %d\n", result);
    return 0;
}
