#include <stdio.h>
#include "lists.h"

/**
  *insert_nodeint_at_index - insert newnode at given position
  *
  *@head : head of the singly linked list
  *@idx: index to where new node is to be inserted
  *@n : integer
  *
  *Return: new node
  *
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	listint_t *nextone;
	listint_t *newhead;
	unsigned int x;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newhead = *head;
	x = 0;
	while (*head != NULL)
	{
		if (x == idx - 1)
		{
			nextone = (*head)->next;
			(*head)->next = newnode;
			newnode->next = nextone;
			*head = newhead;
			return (newnode);
		}
		*head = (*head)->next;
		x++;
	}
	return (NULL);
}
