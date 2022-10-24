#include <stdio.h>
#include "lists.h"

/**
  *get_nodeint_at_index -returns the nth node of a listint_t linked list
  *
  *@head : head of the singly linked list
  *@index : Index of the node to return
  *
  *Return: Return the node at the specified index
  *
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int iterator = 0;
	listint_t *nthnode;

	nthnode = malloc(sizeof(listint_t));
	if (nthnode == NULL)
		return (NULL);
	while (iterator != index)
	{
		head = head->next;
		iterator++;
	}
	nthnode->n = head->n;
	nthnode->next = head->next;
	return (nthnode);
}
