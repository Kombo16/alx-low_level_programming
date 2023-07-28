#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *add_node_end - adds a new node to list_t
 *@head: pointer to pointer to list_t(the list)
 *@str: string to put in new node
 *Return: address of new element
 *NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	/*Assign head to last node*/
	list_t *last_node = *head;
	unsigned int len = 0;

	while (str[len] != 0)
		len++;
	/*Allocate memory*/
	new_node  = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	/*put in data*/
	new_node->str = strdup(str);
	new_node->len = len;
	/*Point next of new node(now last node) to NULL*/
	new_node->next = NULL;
	/*If list is empty, make new node as head*/
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	/*if list is not empty, move till last node*/
	while (last_node->next)
		last_node = last_node->next;
	/*change next of last node*/
	last_node->next = new_node;
	return (new_node);

}
