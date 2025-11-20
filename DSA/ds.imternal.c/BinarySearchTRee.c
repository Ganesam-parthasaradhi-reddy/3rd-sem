#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *left, *right;
} *root = NULL;
    struct node *newnode(int val) {
    struct node *temp =(struct node*)malloc(sizeof(struct node));
    temp->data = val;
    temp->left = temp->right = NULL;
    return temp;
}
void insert() {
    int value;
    printf("Enter value: ");
    scanf("%d", &value);
    struct node *nn = newnode(value);
    if (root == NULL) {
        root = nn;
        return;
    }
    struct node *temp = root;
    while (1) {
        if (value < temp->data) {
            if (temp->left == NULL) {
                temp->left = nn;
                break;
            }
            temp = temp->left;
        } else if (value > temp->data) {
            if (temp->right == NULL) {
                temp->right = nn;
                break;
            }
            temp = temp->right;
        } else {
            printf("Duplicate not allowed.\n");
            free(nn);
            break;
        }
    }
}
void display(struct node *temp) {
    if (temp != NULL) {
        display(temp->left);
        printf("%d ", temp->data);
        display(temp->right);
    }
}
int main() {
    int ch;
    while (1) {
        printf("\n1.Insert  \n2.Display  \n3.Exit");
        printf("\nEnter choice:");
        scanf("%d", &ch);
        switch (ch) {
            case 1: insert(); 
            break;
            case 2: display(root); 
            break;
            case 3: exit(0);
            default: printf("Invalid choice.\n");
        }
    }
    return 0;
}