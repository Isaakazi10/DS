/*
Name        : ISAA KAZI
Date        : 28/04/2023
Description : A15 - WAP for circular queue implementation using array
Sample I/O  :
Sample O/P  :
*/
#include "queue.h"

// Creating queue
int create_queue(Queue_t *q, int size)
{
	q->Que = malloc(sizeof(int) * size);
	if (q->Que == NULL)
	{
		return FAILURE;
	}

	// Assigning values to the members.
	q->capacity = size;
	q->front = -1;
	q->rear = -1;
	q->count = 0;
	return SUCCESS;
}

int main()
{
	Queue_t q;
	int size;
	printf("Enter the size of the queue : ");
	scanf("%d", &size);
	if (create_queue(&q, size) == FAILURE)
	{
		printf("INFO : Queue not created\n");
		return FAILURE;
	}

	int choice, data;
	printf("1. Enqueue\n2. Dequeue\n3. Print Queue\n4. Exit\nEnter the option : ");
	while (1)
	{
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			/* Function to Enqueue the Queue */
			printf("Enter the element you want to insert : ");
			scanf("%d", &data);
			if (enqueue(&q, data) == FAILURE)
			{
				printf("INFO : Queue full\n");
			}
			else
			{
				printf("INFO : Enqueue successfull\n");
			}
			break;
		case 2:
			/* Function to dequeueue the queue */
			if (dequeue(&q) == FAILURE)
			{
				printf("INFO : Queue is empty\n");
			}
			else
			{
				printf("INFO : Dequeue successfull\n");
			}
			break;
		case 3:
			/* Function to print the queue */
			print_queue(q);
			break;
		case 4:
			return SUCCESS;
		default:
			printf("Invalid option !!!\n");
		}
	}
}