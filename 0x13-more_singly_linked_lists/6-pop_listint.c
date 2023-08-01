#include "lists.h"

/**
 *pop_listint - Deletes head node
 *of linked list
 *@head: double pointer to linked
 *list
 *Return: head node's data(n)
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *next_node;
	int data;

	/*check if linked list is empty or head is NULL*/
	if (head == NULL || *head == NULL)
		return (0);
	/*Keep track of node to be deleted*/
	next_node = *head;
	/*make head point to next node*/
	*head = (*head)->next;
	/*save data to be returned*/
	data = next_node->n;
	/*deallocate memory of deleted head node*/
	free(next_node);
	/*return head node data*/
	return (data);
}
