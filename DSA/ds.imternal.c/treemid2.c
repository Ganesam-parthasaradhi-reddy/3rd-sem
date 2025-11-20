#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left, *right;
} *root = NULL;
struct node *createnode()
{
    struct node *newnode;
    int x;
    printf("Enter data (-1 for no node): ");
    scanf("%d", &x);
    if (x == -1)
        return NULL;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->left = createnode();
    newnode->right = createnode();
    return newnode;
}
void display(struct node *temp)
{
    if (temp != NULL)
    {
        display(temp->left);
        printf("%d ", temp->data);
        display(temp->right);
    }
}
int main()
{
    int ch;
    while (1)
    {
        printf("\nEnter choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        {
            root = createnode();
            break;
        }
        case 2: 
        {
            display(root);
            break;
        }
        default:
            exit(0);
        }
}
}