#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 *print_list - displays list
 *@h: pointer to list list_h
 *Return: no of nodes
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		printf("[%u] %s\n", h->len, h->str);
	h = h->next;
	s++;
	}
	return (s);
}
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
	unsigned int len = 0;

	while (str[len] != 0)
		len++;
	/*Allocate new node*/
	list_t *new_node = malloc(sizeof(list_t));

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
