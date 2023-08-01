#include "lists.h"

/**
 * listint_len - Calculate the number of elements.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t listint_len(const listint_t *h)
{
	const listint_t *sam;
	unsigned int count = 0;

	sam = h;
	while (sam)
	{
		count++;
		sam = sam->next;
	}
	return (count);
}
