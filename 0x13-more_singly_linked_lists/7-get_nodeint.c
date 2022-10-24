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
	listint_t *interate;

	nthnode = malloc(sizeof(listint_t));
	if (nthnode == NULL)
		return (NULL);
	interate = head;
	while (iterator != index)
	{
		interate = interate->next;
		iterator++;
	}
	nthnode->n = interate->n;
	nthnode->next = interate->next;
	return (nthnode);
}
