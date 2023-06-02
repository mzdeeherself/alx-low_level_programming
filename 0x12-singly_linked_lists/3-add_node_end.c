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
	list_t *new;
	list_t *num = *head;
	int length = 0;

	while (str[length])
		length++;

	new = malloc(sizeof(list_t));
	if (nds == NULL)
	return (NULL);

	new->next = NULL;
	new->str = strdup(str);
	new->len = length;

	if (*head == NULL)
	{*head = nds;
		return (new);
	}

	while (num->next)
		num = num->next;
	num->next = new;

	return (new);
}
