#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
*add_node - adds a new node
*@head: pointer to list_t
*@str: new string
*Return: Null if it fails or vice vers
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int length = 0;

	while (str[length])
		length++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->len = length;
	new->next = *head;
	*head = new;
	new->str = strdup(str);

	return (*head);
}
