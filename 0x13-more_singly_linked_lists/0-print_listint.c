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
	size_t nnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
