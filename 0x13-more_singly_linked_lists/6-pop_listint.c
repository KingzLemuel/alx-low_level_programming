#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: double pointer to head node
 * Return: head's node data or 0 if empty
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp = *head;

	if (*head == NULL)
		return (0);

	n = (*head)->n;

	*head = temp->next;

	free(temp);
	return (n);
}
