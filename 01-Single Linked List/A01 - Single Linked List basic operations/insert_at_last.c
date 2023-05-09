#include "sll.h"

int insert_at_last(Slist **head, data_t data)
{
    Slist *new_node = (Slist *)malloc(sizeof(Slist));

    if (new_node == NULL)
    {
        return FAILURE;
    }

    new_node->data = data;
    new_node->link = NULL;

    Slist *temp = *head;

    if (*head == NULL)
    {
        (*head) = new_node;
        return SUCCESS;
    }

    while (temp->link != NULL)
    {
        temp = temp->link;
    }

    temp->link = new_node;
    return SUCCESS;
}