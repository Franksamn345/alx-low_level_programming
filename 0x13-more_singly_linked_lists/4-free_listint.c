#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a list.
 * @head: Address of the first node of a list.
 **/

void free_listint(listint_t *head)
{
	listint_t *sam, *sam2;

	sam = head;
	while (sam != NULL)
	{
		sam2 = sam->next;
		free(sam);
		sam = sam2;
	}
}
