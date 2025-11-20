#include <stdio.h>
#include <stdlib.h>
typedef struct tree {
    int data;
    struct tree *left;
    struct tree *right;
} node;
node* create(int val) {
    node* newnode = (node*) malloc(sizeof(node));
    newnode->data = val;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}
node* insert(node* root, int val) {
    if (root == NULL) return create(val);
    if (val < root->data) {
        root->left = insert(root->left, val);
    } else {
        root->right = insert(root->right, val);
    }
    return root;
}
void inorder(node* root) {
    if (root == NULL) return;
    inorder(root->left);
    printf("%d\t", root->data);
    inorder(root->right);
}
void preorder(node* root) {
    if (root == NULL) return;
    printf("%d\t", root->data);
    preorder(root->left);
    preorder(root->right);
}
void postorder(node* root) {
    if (root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    printf("%d\t", root->data);
}
int main() {
    int n,i;
    printf("Number of nodes : ");
    scanf("%d", &n);
    node* root = NULL;
     for (i = 0; i < n; i++) {
        printf("Enter %d node: ", i + 1);
        int val;
        scanf("%d", &val);
        root = insert(root, val);
    }
    printf("Inorder:\n");
    inorder(root);
    printf("\n");

    printf("Preorder:\n");
    preorder(root);
    printf("\n");

    printf("Postorder:\n");
    postorder(root);
    printf("\n");
    return 0;
}
