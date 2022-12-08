#include <stdio.h>
#include "lists.h"

/**
  *print_dlistint - prints all the element of the linked list
  *
  *@h: pointer to the head of the linked list
  *
  *Return: the number of nodes
  *
 **/

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int interator;

	interator = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		interator += 1;
	}
	return (interator);
}
