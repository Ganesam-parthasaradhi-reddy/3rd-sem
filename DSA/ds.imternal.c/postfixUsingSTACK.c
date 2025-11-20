#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int stack[100], top = -1;
void push(int x) {
    stack[++top] = x;
}
int pop() {
    return stack[top--];
}
int main() {
    char expr[100];
    int i, a, b, result;
    printf("Enter postfix expression: ");
    scanf("%s", expr);
    for (i = 0; expr[i] != '\0'; i++) {
        if (isdigit(expr[i])) {
            push(expr[i] - '0'); 
        } else {
            b = pop();
            a = pop();
            switch (expr[i]) {
                case '+': push(a + b); break;
                case '-': push(a - b); break;
                case '*': push(a * b); break;
                case '/': push(a / b); break;
            }
        }
    }
    result = pop();
    printf("Result = %d\n", result);
    return 0;
}