#include <stdio.h>
#include "lists.h"

/**
  *delete_nodeint_at_index - Delete node at index of the listint_t
  *
  *@head: pointer to the head of the linked list
  *@index: index at which node will be deleted
  *
  *Return: (1) success, (-1) failed
  *
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x = 0;
	unsigned int iterator;
	listint_t *temp;
	listint_t *nextnode;

	if (*head == NULL)
		return (-1);
	while (*head != NULL)
	{
		x++;
		*head = (*head)->next;
	}
	if (index > (x - 1))
		return (-1);
	temp = *head;
	iterator = 0;
	while (temp != NULL)
	{
		if (iterator == index)
		{
			nextnode = temp->next;
			free(temp);
			temp = nextnode;
			break;
		}
		temp = temp->next;
		iterator += 1;
	}
	return (1);
}
