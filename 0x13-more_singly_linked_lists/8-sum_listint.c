#include "lists.h"

/**
 *sum_listint - prints sum of all
 *data of linked_list
 *@head: pointer to head of list
 *Return: sum of data
 *
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	/*check if list is empty*/
	if (current == NULL)
		return (0);
	while (current != NULL)
	{
		/*calculate sum of data stored*/
		sum += current->n;
		/*move to next node*/
		current = current->next;
	}
	return (sum);
}
