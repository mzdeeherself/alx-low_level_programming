#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
*print_list - lists all elements in a linked list.
*@h: pointer to the list_t list to print
*
*Return: printed number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t nds = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%u} %s\n", h->len, h->str);

		h = h->next;
		nds++;
	}
	return (nds);
}
