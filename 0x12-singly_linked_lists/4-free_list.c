#include <stdlib.h>
#include "lists.h"

/**
* free_list - frees linkeed lists.
* @head: fress  list_t
 */

void free_list(list_t *head)
{
	list_t *new;

	while ((new = head) != NULL)
	{
		free(new);
		head = head->next;
		free(new);
	}
}
