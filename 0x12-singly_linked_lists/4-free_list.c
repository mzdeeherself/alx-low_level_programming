#include <stdlib.h>
#include "lists.h"

/**
* free_list - frees linkeed lists.
* @head: fress  list_t
 */

void free_list(list_t *head)
{
	list_t *nds;

	while ((nds = head) != NULL)
	{
		free(nds);
		head = head->next;
		free(nds);
	}
}
