#include "lists.h"
#include <stdio.h>

/**
 *list_len - prints number of elements of list
 *@h: pointer to list_t
 *Return: no of nodes(value
 *stored in data type size_t )
 *
 */
size_t list_len(const list_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		h = h->next;
		s++;
	}
	return (s);

}
