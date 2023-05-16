#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int x;
    struct Node* next;
} Node;

void insert_end(Node** root, int value)
{
    Node* new_node = malloc(sizeof(Node));
    if(new_node == NULL)
    {
        exit (1);
    } else {
    new_node->next = NULL;
    new_node->x = value;
    }
    
    Node* curr = *root;
    
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = new_node;

} 

int main()
{
    Node* root = malloc(sizeof(Node));
    if(root == NULL)
    {
        exit (2);
    }

    root->x = 15;
    root->next = NULL;

    insert_end(&root,-2);
    insert_end(&root, 11);


  for(Node* curr = root; curr != NULL; curr = curr->next)
  {
    printf("%d\n", curr->x);
  }

    return 0;
}
