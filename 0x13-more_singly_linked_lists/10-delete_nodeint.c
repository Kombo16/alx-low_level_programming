#include "lists.h"

/**
 *delete_nodeint_at_index - delete
 *new node at given position
 *@head: double pointer to head of list
 *@index: index of listint_t list
 *
 *Return: address of new node
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *prev_node;
	listint_t *next_node;

	next_node = *head;
	/*check if list is empty*/
	if (*head == NULL)
		return (-1);
	/*if index is zero delete from beginning of list*/
	if (index == 0)
	{
		/*move head to point to next node*/
		*head = next_node->next;
		/*free unused memory*/
		free(next_node);
		return (1);
	}
	/*if index is greater than 0,traverse till you find previous node*/
	while (next_node != NULL)
	{
		if (count == index - 1)
		{
			prev_node = next_node;
			/*if next of prev node points to NULL*/
			if (prev_node->next == NULL)
				return (-1);
			/*point next of prev node*/
			prev_node->next = next_node->next;
			/*free unused memory*/
			free(next_node);
			return (1);
		}
		/*point to next node*/
		next_node = next_node->next;
		/*increment*/
		count++;
	}
	/*index is greater than no of nodes*/
	return (-1);
}
