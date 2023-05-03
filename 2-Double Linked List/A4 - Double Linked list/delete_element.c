#include "dll.h"

int dl_delete_element(Dlist **head, Dlist **tail, int data)
{
    // If *head and *tail is equal to NULL return LIST_EMPTY
    if ((*head == NULL) && (*tail == NULL))
    {
        return LIST_EMPTY;
    }

    // Creating temp pointer to transverse the node
    Dlist *temp = *head;

    // While temp->next is not equal to NULL keep runnig the loop.
    while (temp->next != NULL)
    {
        // If temp->data is equal to data then excecute if-statement
        if (temp->data == data)
        {
            // Algorithum to delete the node
            if (*head == temp)
            {
                *head = (*head)->next;
                (*head)->prev = NULL;
                free(temp);
                return SUCCESS;
            }

            (temp->prev)->next = temp->next;
            (temp->next)->prev = temp->prev;
            free(temp);
            return SUCCESS;
        }

        temp = temp->next;
    }

    // If temp->next is equal to NULL
    if (temp->next == NULL)
    {
        // If temp->data is equal to data then excecute if-statement
        if (temp->data == data)
        {
            // Algorithum to delete the node
            if (*head == temp)
            {
                *head = *tail = NULL;
                free(temp);
                return SUCCESS;
            }

            temp->prev->next = NULL;
            free(temp);
            return SUCCESS;
        }
    }

    return DATA_NOT_FOUND;
}