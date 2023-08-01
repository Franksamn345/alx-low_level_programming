#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Print elements of a singly linked list.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t print_listint(const listint_t *h)
{
	const listint_t *sam;
	unsigned int count = 0;

	sam = h;
	while (sam)
	{
		printf("%d\n", sam->n);
		count++;
		sam = sam->next;
	}
	return (count);
}
