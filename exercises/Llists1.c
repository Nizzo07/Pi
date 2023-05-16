#include<stdio.h>
#include<stdlib.h>

/*typedef struct Node
{
    int x;
    struct Node* next;
} Node;



int main(int argc, char* argv[])
{
    Node root, element2;
    root.x = 15;
    root.next = malloc(sizeof(Node));
    root.next->x = -2;
    root.next->next= NULL;

    printf("%d -> %d", root.x, root.next->x);

    free(root.next);

    return 0;
}*/

typedef struct Node
{
    int x;
    struct Node* next;
} Node;

int main(int argc, char* argv[])
{
    Node root, element2;

    root.x = 23;
    root.next = malloc(sizeof(Node));
    root.next->x = 21;
    root.next->next = NULL;

    printf("%d - %d = %d", root.x, root.next->x, root.x - root.next->x);

    free(root.next);
}
