#include <stdio.h>
#include "lists.h"

/**
  *listint_len - returns the number of element in listint_t
  *
  *@h : head of the singly linked lise
  *
  *Return: The number of element
  *
 **/

size_t listint_len(const listint_t *h)
{
	unsigned int len;

	len = 0;
	while (h != NULL)
	{
		len += 1;
		h = h->next;
	}
	return (len);
}
