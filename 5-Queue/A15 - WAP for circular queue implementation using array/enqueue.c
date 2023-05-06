#include "queue.h"

/* Function to Insert the element */
int enqueue(Queue_t *q, int data)
{
    // Too check GIVEN QUEUE  is FULL or NOT.
    if (IsQueueFull(q) == SUCCESS)
    {
        // if the function IsQueueFull return FAILURE then the queue is full.
        return FAILURE;
    }

    // If Increament of rear is equal to capacity then rear mod of capacity
    if (++(q->rear) == (q->capacity))
    {
        q->rear = q->rear % q->capacity;
    }

    // If front and rear are equal to -1 execute if-statement else else-statement
    if ((q->front == -1) && (q->rear == 0))
    {
        // Update the front and Insert the data in queue.
        ++(q->front);
        q->Que[q->rear] = data;
    }
    else
    {
        // Update the data in queue
        q->Que[q->rear] = data;
    }

    // Increament of count
    q->count++;
    return SUCCESS;
}