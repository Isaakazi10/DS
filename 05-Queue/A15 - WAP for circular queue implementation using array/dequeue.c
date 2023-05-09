#include "queue.h"

/* Function to deque the element */
int dequeue(Queue_t *q)
{
    // Too check GIVEN QUEUE is EMPTY or NOT.
    if (IsQueueEmpty(q) == SUCCESS)
    {
        // if the function IsQueueEmpty return FAILURE then the queue is Empty.
        return FAILURE;
    }

    // If Increament of front is equal to capacity then rear mod of capacity
    if (++(q->front) == (q->capacity))
    {
        q->front = q->front % q->capacity;
    }

    // Decreament of count
    q->count--;

    // If count is equal to zero then make front and rear -1.
    if (q->count == 0)
    {
        q->front = -1;
        q->rear = -1;
    }

    return SUCCESS;
}