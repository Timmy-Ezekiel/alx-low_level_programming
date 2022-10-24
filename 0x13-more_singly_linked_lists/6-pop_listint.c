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
	listint_t *temp;
	listint_t *nextnode;

	if (!(*head))
		return (0);
	temp = *head;
	head_int = temp->n;
	nextnode = temp->next;
	free(temp);
	*head = nextnode;
	return (head_int);
}
