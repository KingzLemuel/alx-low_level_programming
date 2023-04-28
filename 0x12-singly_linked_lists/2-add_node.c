#include "lists.h"
/**
*add_node - addds a new node at beginnig of list_t
*@head: pointer to node
*@str: string for the new node
*Return: address of new element or NULL at success or failure resp.
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = (*head);
	*(head) = new_node;

	return (*head);
}