/*Remove a element in a linked List*/

#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int x;
    struct Node* next;
} Node;


void remove_elem(Node** root, int value)
{
    if(*root == NULL)
    {
        return;
    }

    
    if((*root)->x == value)
    {
        Node* to_remove = *root;
        *root = (*root)->next;
        free(to_remove);
        return;
    }
    
    for (Node* curr = *root; curr->next != NULL; curr->next = curr)
    {
        if(curr->next->x == value);
        Node* to_remove = curr->next;
        curr->next = curr->next->next;
        free(to_remove);
        return;
    }
    
}

void insert_node(Node** root, int value)
{
    Node* new_node = malloc(sizeof(Node));
    if(new_node == NULL)
    {
        exit (1);
    } 
    new_node->next = NULL;
    new_node->x = value;

    Node* curr = *root;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = new_node;
    
}



int main(int argc, char const *argv[])
{

Node* root = malloc(sizeof(Node));
    if(root == NULL)
    {
        exit (2);
    }

    root->x = 15;
    root->next = NULL;

    insert_node(&root, 1);
    insert_node(&root, 3);
    insert_node(&root, 6);


  for(Node* curr = root; curr != NULL; curr = curr->next)
  {
    printf("%d\n", curr->x);
  }

    return 0;
}