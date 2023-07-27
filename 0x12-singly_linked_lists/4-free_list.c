#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *print_list - prints all elements of list
 *@h: pointer to list_t
 *Return: no of nodes(value
 *stored in data type size_t )
 *
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
 *add_node_end - adds a new node to list_t
 *@head: pointer to pointer to list_t(the list)
 *@str: string to put in new node
 *Return: address of new element
 *NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{

	unsigned int len = 0;

	while (str[len] != 0)
		len++;
	/*Allocate memory*/
	list_t *new_node  = malloc(sizeof(list_t));
	/*Assign head to last node*/
	list_t *last_node = (*head);
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
	while (last_node->next != NULL)
		last_node = last_node->next;
	/*change next of last node*/
	last_node->next = new_node;
	return (new_node);

}
/**
 *free_list - Function frees a list_t list
 *@head: The list to be freed
 *
 *
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		/*Assign next of head to new node*/
		list_t *new_node = head->next;
		/*Free all previously allocated memory*/
		free(head->str);
		free(head);
		/*make new_node as head*/
		head = new_node;
	}
}
