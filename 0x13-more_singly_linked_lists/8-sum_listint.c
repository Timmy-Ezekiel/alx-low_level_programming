#include <stdio.h>
#include "lists.h"

/**
  * sum_listint - sum all of the data(n) of the listint_t linked list
  *
  *@head : head of the linked list
  *
  *Return: The sum of the integer in the nodes
  *
 **/

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
