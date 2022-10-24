#include <stdio.h>
#include "lists.h"

/**
  *print_listint- prints elements in listint_t
  *
  *@h : Head of the singly linked list
  *
  *Return: Number of nodes
  *
 **/

size_t print_listint(const listint_t *h)
{
	unsigned int Nnodes = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		Nnodes += 1;
		h = h->next;
	}
	return (Nnodes);
}
