#include <stdio.h>
#include "lists.h"

/**
  *free_listint2 - function free a listint_t list
  *
  *@head : The head of the singly linked list
  *
 **/

void free_listint2(listint_t **head)
{
	listint_t *nextnode;

	while (*head != NULL)
	{
		nextnode = (*head)->next;
		free(*head);
		*head = nextnode;
	}
}
