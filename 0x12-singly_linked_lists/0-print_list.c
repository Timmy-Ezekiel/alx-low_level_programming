#include <stdio.h>
#include "lists.h"

/**
  *print_list - prints a singly linked list
  *
  *@h: struct (typdef) to the singly list
  *
  *Return: number of nodes
  *
 **/

size_t print_list(const list_t *h)
{
	const list_t *head = h;
	unsigned int x;

	x = 0;
	while (head != NULL)
	{
		if (head->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", head->len, head->str);
		head = head->next;
		x += 1;
	}
	return (x);
}
