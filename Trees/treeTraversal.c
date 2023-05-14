#include <stdio.h>
#include <stdlib.h>

// Tree Traversal

struct node
{
    int item;
    struct node *left;
    struct node *right;
};

// Inorder Traversal
void InorderTraversal(struct node *root)
{
    if (root == NULL)
        return;

    InorderTraversal(root->left);
    printf("%d ->", root->item);
    InorderTraversal(root->right);
}

// PreorderTraversal Traversal
void preorderTraversal(struct node *root)
{
    if (root == NULL)
        return;

    printf("%d ->", root->item);
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

// PostorderTraversal Traversal
void postorderTraversal(struct node *root)
{
    if (root == NULL)
        return;

    postorderTraversal(root->left);
    postorderTraversal(root->right);
    printf("%d ->", root->item);
}

// Create a new node
struct node *createNode(value)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->item = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

// Insert on the left of the node
struct node *insertLeft(struct node *root, int value)
{
    root->left = createNode(value);
    return root->left;
}

// Insert on the right of the node
struct node *insertRight(struct node *root, int value)
{
    root->right = createNode(value);
    return root->right;
}

int main()
{
    struct node *root = createNode(1);
    insertLeft(root, 12);
    insertRight(root, 6);

    insertLeft(root->left, 5);
    insertRight(root->left, 6);

    printf("Inorder Traversal \n");
    InorderTraversal(root);

    printf("\nPreorder Traversal \n");
    preorderTraversal(root);

    printf("\nPostorder Traversal \n");
    postorderTraversal(root);
}
