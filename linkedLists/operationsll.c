#include <stdio.h>
#include <stdlib.h>

// Lista de operaçoes basicas de linked lists:
/*-Transversal: acessa cada elemento de uma lista ligada;
  -Insertion: adiciona um novo elemento de uma lista ligada;
  -Deletion: remove os elementos existentes;
  -Search: descobre o node numa de uma lista ligada;
  -Sort: descreve/sort os nodes de uma lista ligada;
*/

// Criar um node:
typedef struct node
{
    int data;
    node *next;
} node;

// Inserir no inicio:
void insertAtBeginning(struct node **head_ref, int new_data)
{
    // Alocar memoria para um node
    node *new_node = (struct node *)malloc(sizeof(node));

    // inserir a data:
    new_node->data = new_data;

    new_node->next = (*head_ref);

    // Move a cabeça para um novo node:
    (*head_ref) = new_node;
}

// Inserir depois do node:
void insertAfter(node *prev_node, int new_data)
{
    if (prev_node == NULL)
    {
        printf("the givem previous node cannot be NULL");
        return;
    }
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

// Inserir no final:
void insertAtEnd(node **head_ref, int new_data)
{
    node *new_node = (node *)malloc(sizeof(node));
    node *last = head_ref;

    new_node->data = new_data;
    new_node->next = NULL;

    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL)
        last->next;

    last->next = new_node;
    return;
}

// Eliminar um node:

void deletenode(node **head_ref, int key)
{
    node *temp = *head_ref, *prev;

    if (temp != NULL && temp->data == key)
    {
        *head_ref = temp->next;
        free(temp);
        return;
    }
    // Encontrar a key para ser eliminada
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }

    // Se a key nao esta presente:
    if (temp == NULL)
        return;

    // Remover o node:
    prev->next = temp->next;

    free(temp);
}

// Procurar um node:

int searchNode(node **head_ref, int key)
{
    node *current = *head_ref;
    while (current != NULL)
    {
        if (current->data == key)
            return 1;
        current = current->next;
    }
    return 0;
}

// Sorta a lista ligada:

void sortLinkedList(node **head_ref)
{
    node *current = *head_ref, *index = NULL;
    int temp;

    if (head_ref == NULL)
    {
        return;
    }
    else
    {
        while (current != NULL)
        {
            // index points para o node seguinte do current
            index = current->next;

            while (index != NULL)
            {
                if (current->data > index->data)
                {
                    temp = current->data;
                    current->data = index->data;
                    index->data = temp;
                }
                index = index->next;
            }
            current = current->next;
        }
    }
}

// print as listas ligadas:
void printList(node *node)
{
    while (node != NULL)
    {
        printf(" %d ", node->data);
        node = node->next;
    }
}

int main()
{
    node *head = NULL;

    insertAtEnd(&head, 1);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 3);
    insertAtEnd(&head, 4);
    insertAfter(head->next, 5);

    printf("Linked list: ");
    printList(head);

    printf("\nAfter deleting an element: ");
    deletenode(&head, 3);
    printfList(head);

    int item_to_find = 3;
    if (searchNode(&head, item_to_find))
    {
        printf("\n%d is found", item_to_find);
    }
    else
    {
        printf("\n%d is not found", item_to_find);
    }

    sortLinkedList(&head);
    printf("\nSorted List: ");
    printList(head);

    return 0;
}