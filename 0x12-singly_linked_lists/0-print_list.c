#include <stdio.h>
#include "lists.h"
/**
*print_list - lists all elements in a linked list 
*@h - list_t
*
*Return: printed number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t nds =0;

	while(h)
	{
		if(h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%u} %s\n",h->len, h->str);

		nds++;
		h = h->next;
 }
 return (nds);
 }
