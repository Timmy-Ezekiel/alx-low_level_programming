#include <stdio.h>
#include "lists.h"

/**
  *pop_listint - deletes the head node and return head node's data
  *
  *@head: head of the singly linked list
  *
  *Return: Integer at the head node
  *
 **/

int pop_listint(listint_t **head)
{
	int head_int;
	listint_t *nextnode;

	if (*head == NULL)
		return (0);
	head_int = (*head)->n;
	nextnode = (*head)->next;
	free(*head);
	*head = nextnode;
	return (head_int);
}
