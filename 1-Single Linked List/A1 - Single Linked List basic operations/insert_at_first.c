#include "sll.h"

int insert_at_first(Slist **head, data_t data)
{
    // Need to create new node for storing of data
    Slist *new_node = (Slist *)malloc(sizeof(Slist));
    if (new_node == NULL)
    {
        return FAILURE;
    }

    // Need to store data which is given into the new_node data section
    new_node->data = data;
    // Need to store last head value in new_node link section.
    new_node->link = (*head);

    // Storing address of new node in head
    (*head) = new_node;
    return SUCCESS;
}