#include "lists.h"

/**
 *free_listint - frees a listint list
 *@head: pointer to head of listint
 *list
 *
 *
 */
void free_listint(listint_t *head)
{
	listint_t *new;
	/*while list is empty*/
	while (head)
	{
		/*assign next of head to new node*/
		new = head->next;
		/*free all previously allocated memory*/
		free(head);
		/*make new node be head*/
		head = new;
	}
}
