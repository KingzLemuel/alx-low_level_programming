#include "lists.h"
/**
*list_len - gives the number of elements in list_t
*@h:pointer to list
*
*Return: number of elements in list_t
*/
size_t list_len(const list_t *h)
{
	unsigned long int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
