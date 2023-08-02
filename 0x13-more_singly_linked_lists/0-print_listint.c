#include "lists.h"

/**
 *print_listint - prints all elements of listint
 *@h: pointer to listint_t
 *Return: no of nodes
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t s = 0;

	/*while h is not equal to NULL*/
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		s++;
	}
	return (s);
}
