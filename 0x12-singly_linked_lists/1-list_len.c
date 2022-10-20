#include <stdio.h>
#include "lists.h"

/**
  *list_len - list the number of elements in list_t list
  *
  *@h : a pointer to list_t linked list
  *
  *Return: The number of elements
  *
**/

size_t list_len(const list_t *h)
{
	const list_t *head = h;
	unsigned int x = 0;

	while (head != NULL)
	{
		x += 1;
		head = head->next;
	}
	return (x);
}
