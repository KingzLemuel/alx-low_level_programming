#include "lists.h"
/**
*add_node - addds a new node at end of list_t
*@head: pointer to node
*@str: string for the new node
*Return: address of new element or NULL at success or failure resp.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = *head;
	list_t *add;
	unsigned int len = 0;

	while (str[len])
		len++;

	add = malloc(sizeof(list_t));
	if (!add)
		return (NULL);

	add->str = strdup(str);
	add->len = len;
	add->next = NULL;

	if (*head == NULL)
	{
		*head = add;
		return (add);
	}
	while (temp->next)
		temp = temp->next;

	temp->next = add;
	return (add);	
}

