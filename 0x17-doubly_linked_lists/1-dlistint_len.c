#include <stdio.h>
#include "lists.h"

/**
  *dlistint_len - returns the number of node in a doubly linked list
  *
  *@h : head of the list
  *
  *Return: number of nodes
  *
 **/

size_t dlistint_len(const dlistint_t *h)
{
	unsigned int length;

	length = 0;
	while (h != NULL)
	{
		length += 1;
		h = h->next;
	}
	return (length);
}
