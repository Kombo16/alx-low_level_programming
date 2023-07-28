#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *add_node - Adds a new node at beginning of list
 *@head: pointer to pointer to head of list
 *@str: new string to add in node
 *Return: address of new element or NULL
 *if it fails
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_mode;
	unsigned int len = 0;

	while (str[len])
		len++;
	/*Allocate new node*/
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	/*Duplicate string*/
	new_node->str = strdup(str);
	/*put in data*/
	new_node->len = len;
	/*make next of new node as head*/
	new_node->next = (*head);
	/*move head to point to new_node*/
	(*head) = new_node;
	return (*head);

}
