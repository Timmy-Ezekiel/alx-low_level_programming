#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  *free_list-frees list_t list
  *
  *@head: head of the singly linked list
  *
 **/

void free_list(list_t *head)
{
	list_t *present;

	while (head != NULL)
	{
		present = head;
		head = head->next;
		free(present);
		free(present->str);
	}
}
