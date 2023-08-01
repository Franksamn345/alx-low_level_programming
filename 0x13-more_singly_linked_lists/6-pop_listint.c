#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Delete the first element of a singly linked list.
 * @head: Pointer to a list.
 * Return: Integer if success.
 **/

int pop_listint(listint_t **head)
{
	listint_t *sam;
	int del;

	if (*head == NULL)
		return (0);

	sam = *head;
	*head = sam->next;
	del = sam->n;
	free(sam);
	return (del);
}
