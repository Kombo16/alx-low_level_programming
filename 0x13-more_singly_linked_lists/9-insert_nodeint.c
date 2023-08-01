#include "lists.h"

/**
 *insert_nodeint_at_index - inserts
 *new node at given position
 *@head: double pointer to head of list
 *@idx: index of listint_t list
 *@n: The data to be input in list
 *
 *Return: address of new node
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *prev_node;
	listint_t *current = *head;
	listint_t *new_node;

	/*if index is zero insertion is at beginning of list*/
	if (idx == 0)
	{
		/*allocate memory */
		new_node = malloc(sizeof(listint_t));
		/*check mem allocation*/
		if (new_node == NULL)
			return (NULL);
		/*put in data*/
		new_node->n = n;
		/*move next of new node as head*/
		new_node->next = *head;
		/*move head to point to new node*/
		*head = new_node;
		return (new_node);
	}
	/*if index is greater than 0,traverse till you find previous node*/
	while (current != NULL)
	{
		if (count == idx - 1)
		{
			prev_node = current;

			/*allocate memory*/
			new_node = malloc(sizeof(listint_t));
			if (new_node == NULL)
				return (NULL);
			/*put in data*/
			new_node->n = n;
			/*move next of new node as next of prev node*/
			new_node->next = prev_node->next;
			/*move prev node to point to new node*/
			prev_node->next = new_node;
			return (new_node);
		}
		/*point to next node and increment*/
		current = current->next;
		count++;
	}
	/*index is greater than no of nodes*/
	return (NULL);
}
