#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *free_list - Function frees a list_t list
 *@head: The list to be freed
 *
 *
 */
void free_list(list_t *head)
{
	list_t *new_node;

	while (head)
	{
		/*Assign next of head to new node*/
		new_node = head->next;
		/*Free all previously allocated memory*/
		free(head->str);
		free(head);
		/*make new_node as head*/
		head = new_node;
	}
}
