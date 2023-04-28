#include "sll.h"

int find_node(Slist *head, data_t data)
{
    // if head is equal to NULL then return FAILURE.
    if (head == NULL)
    {
        return FAILURE;
    }

    // Make a temp pointer then store head in it.
    Slist *temp = head;
    // Initialize count to 1;
    int count = 1;

    // While temp->link is not equal to NULL the keep running the loop
    while (temp->link != NULL)
    {
        // If temp->data is equalt o data the return count
        if (temp->data == data)
        {
            return count;
        }

        // Increase the node and increase the count
        temp = temp->link;
        count++;
    }

    // If temp->data is equal to data the return count
    if (temp->data == data)
    {
        return count;
    }
    return FAILURE;
}
