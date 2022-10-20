#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
  *add_node - adds a new node at the beginning of list_t list
  *
  *@head: pointer to pointer
  *@str: string to be dulicated
  *
  *Return: address to the new Element
  *
 **/

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
