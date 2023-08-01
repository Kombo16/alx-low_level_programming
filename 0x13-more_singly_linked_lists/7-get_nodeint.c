#include "lists.h"

/**
 *get_nodeint_at_index - Prints
 *node being searched for
 *@head: pointer to head of node
 *@index: index of node being looked for
 *
 *Return: NULL if node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current_node = head;

	/*traverse through nodes*/
	while (current_node != NULL)
	{
		if (count == index)
			/*node being searched for has been found*/
			return (current_node);
		/*else keep looking*/
		current_node = current_node->next;
		count++;
	}
	/*node does not exist*/
	return (NULL);
}
