#include "lists.h"
/**
 *reverse_listint - Function that
 *reverses a list
 *@head: double pointer to linked
 *list
 *Return: pointer to first node of
 *reversed list
 *
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head;
	listint_t *prev = NULL;

	/*check if list is empty*/
	if (head == NULL)
		return (NULL);
	/*Traverse through the list*/
	while (current != NULL)
	{
		*head = current->next;
		/*make last node point to prev node*/
		current->next = prev;
		prev = current;
		current = *head;
	}
	*head = prev;
	return (*head);
}
