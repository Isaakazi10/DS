#include "queue.h"

int dequeue(Queue_t **front, Queue_t **rear)
{
    // If front and rear are equal to NULL then return FAILURE
    if ((*front == NULL) && (*rear == NULL))
    {
        return FAILURE;
    }
    // if front is equal to rear then free front and Update the front and rear pointer and make them point towards NULL.
    else if (*front == *rear)
    {
        free(*front);
        *front = *rear = NULL;
        return SUCCESS;
    }

    // Make a new temp pointer and store front in it.
    Queue_t *temp = *front;
    // Update the front and free temp and return SUCCESS.
    *front = (*front)->link;
    free(temp);
    return SUCCESS;
}