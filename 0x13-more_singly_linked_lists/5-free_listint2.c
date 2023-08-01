#include "lists.h"

/**
 *free_listint2 - frees a listint list
 *@head: pointer to pointer to head of listint
 *list
 *
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *new_node;
	listint_t *current_node = *head;
	
	/*check if list is empty*/
	if (head == NULL)
		return;
	/*while list is not empty*/
	while (current_node)
	{
		/*assign next of head to new node*/
		new_node = current_node->next;
		/*free all previously allocated memory*/
		free(current_node);
		/*make new node be head*/
		current_node = new_node;
	}
	/*set head to NULL*/
	*head = NULL;
}
