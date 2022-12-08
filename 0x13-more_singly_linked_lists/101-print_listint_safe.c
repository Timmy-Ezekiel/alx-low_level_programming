#include <stdio.h>
#include "lists.h"

/**
  *print_listint_safe - Prints safe version of linked list (listint_t)
  *
  *@head: head of the linked list (Pointer to the beginning)
  *
  *Return: Number of nodes
  *
 **/

size_t print_listint_safe(const listint_t *head)
{
	unsigned int length;
	const listint_t *new;

	if (head == NULL)
		exit(98);
	new = head;
	length = 0;
	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		length += 1;
	}
	head = new;
	return (length);
}
