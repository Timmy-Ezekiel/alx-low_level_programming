#include <stdlib.h>
#include "lists.h"

/**
  *free_listint - Function free listint_t
  *
  *@head : Head of the singly linked list
  *
 **/

void free_listint(listint_t *head)
{
	listint_t *nextnode;

	while (head != NULL)
	{
		nextnode = head->next;
		free(head);
		head = nextnode;
	}
	free(head);
}
