#include "lists.h"

/**
 *add_nodeint - Adds a new node
 *at the beginning of listint_t
 *@head: pointer to pointer to
 *head of listint_t
 *@n: element to be added to new node
 *Return: address of new element
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	/*create new node and allocate memory*/
	 new = malloc(sizeof(listint_t));
	 /*check if new node is NULL*/

	if (new == NULL)
		return (NULL);

	/*put in data*/
	 new->n = n;
	/*make next of new node be head*/
	new->next = (*head);
	/*make head point to new node*/
	(*head) = new;
	/*address of new element*/
	return (*head);

}
