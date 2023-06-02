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
	list_t *num;
	unsigned int length = 0;

	while (str[length])
		length++;

	num = malloc(sizeof(list_t));
	if (num == NULL)
		return (NULL);

	num->len = length;
	num->next = *head;
	*head = num;
	num->str = strdup(str);

	return (*head);
}
