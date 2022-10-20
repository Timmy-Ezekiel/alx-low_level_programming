#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
  *add_node_end - adds a new node to the end of a list_t
  *
  *@head: pointer to pointer
  *@str: string to be duplicated
  *
  *Return: pointer to the new node
  *
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *lastnode;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = strlen(str);
	if (*head == NULL)
	{
		newnode->next = NULL;
		*head = newnode;
	}
	else
	{
		newnode->next = NULL;
		lastnode = *head;
		while (lastnode->next != NULL)
			lastnode = lastnode->next;
		lastnode->next = newnode;
	}
	return (newnode);
}
