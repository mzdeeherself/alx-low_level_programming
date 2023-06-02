#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
*add_node_end - adds anew node at the end of the list
*@head: point to the list (double p)
*@str: string to enter new node
*
*Return: address of element or null
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nds;
	list_t *num = *head;
	int length = 0;

	while (str[length])
		length++;

	nds = malloc(sizeof(list_t));
	if (nds == NULL)
	return (NULL);

	nds->next = NULL;
	nds->str = strdup(str);
	nds->len = length;

	if (*head == NULL)
	{*head = nds;
		return (nds);
	}

	while (num->next)
		num = num->next;
	num->next = nds;

	return (nds);
}
