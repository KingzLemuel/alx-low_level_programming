#include "lists.h"
/**
*free_list - frees unsused memory in list_t
*@head: pointer to node
*Return: Always 0 (Success)
*/
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
