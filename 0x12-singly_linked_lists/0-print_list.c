#include "lists.h"
#include <stdio.h>

/**
 *print_list - prints all elements of list
 *@h: pointer to list_t
 *Return: no of nodes(value
 *stored in data type size_t)
 *
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);

}
