#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
*list_len - number of linked in elements
*@h: the list_t list
*Return: no. of h elements
*/
size_t list_len(const list_t *h)
{
	size_t c = 0;

	while (h)
	{
		c++;
		h = h->next;
	}
	return (c);
}
