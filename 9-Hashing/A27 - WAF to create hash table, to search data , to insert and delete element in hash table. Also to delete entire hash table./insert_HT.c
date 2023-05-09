#include "hash.h"

int insert_HT(hash_t *arr, int element, int size)
{
    // To find the index the number needs to stored we are using element mod of size and storing in index var.
    int index = element % size;

    if (arr[index].value == -1)
    {
        arr[index].value = element;
    }
    else
    {
        // Creating a new_node and make new_node of link is equal to NULL
        hash_t *new_node = malloc(sizeof(hash_t));
        if (new_node == NULL)
        {
            return FAILURE;
        }

        // Update value and link members of new_node.
        new_node->value = element;
        new_node->link = NULL;

        // Creating temp pointer and storing arr address in temp.
        hash_t *temp = (arr + index);

        // While temp of link is not equal to NULL keep updating the temp pointer.
        while (temp->link != NULL)
        {
            temp = temp->link;
        }

        temp->link = new_node;
    }

    // return SUCCESS
    return SUCCESS;
}