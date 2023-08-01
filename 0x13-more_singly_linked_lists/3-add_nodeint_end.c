#include "lists.h"

/**
 *add_nodeint_end - Add new node
 *at end of list
 *@head: pointer to pointer to
 *head of listint_t
 *@n: element to be added in
 *node
 *
 *Return:address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *last_node;

	new_node = malloc(sizeof(listint_t));
	last_node = *head;
	/*check if new node is null*/
	if (!new_node)
		return (NULL);
	/*put in data*/
	new_node->n = n;
	/*next of new node should point to null*/
	new_node->next = NULL;
	/*if list is empty make new node be head*/
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	/*traverse till last node*/
	while (last_node->next != NULL)
		last_node = last_node->next;
	/*make next of last node point to new_node*/
	last_node->next = new_node;
	return (*head);
}
