#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int x;
    struct Node* next;
} Node;



int main(int argc, char* argv[])
{
    Node root, element2;
    root.x = 15;
    root.next = &element2;
    element2.x = -2;
    element2.next = NULL;

    printf("First element is %d\n", root.x);
    printf("The next one and last is %d\n", element2);
    return 0;
}