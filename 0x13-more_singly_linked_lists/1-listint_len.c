#include "lists.h"

/**
 *listint_len - Gives number of elements
 *in a linked list
 *@h: pointer to listint
 *Return: no of elements
 *
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t s = 0;

	while (h)
	{
		/*traverse till last node*/
		h = h->next;
		s++;
	}
	return (s);
}
