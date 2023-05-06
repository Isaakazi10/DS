#include "queue.h"

int enqueue(Queue_t **front, Queue_t **rear, int data)
{
    // Creation of new_node and if new_node is equal to NULL then  return FAILURE.
    Queue_t *new_node = malloc(sizeof(Queue_t));
    if (new_node == NULL)
    {
        return FAILURE;
    }

    // Update the new_node with data .
    new_node->data = data;
    new_node->link = NULL;

    if ((*front == NULL) && (*rear == NULL))
    {
        *front = *rear = new_node;
    }
    else
    {
        (*rear)->link = new_node;
        *rear = (*rear)->link;
    }
    return SUCCESS;
}