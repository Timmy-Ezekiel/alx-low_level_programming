#include <stdio.h>
#include "lists.h"

/**
  *add_nodeint - adds a new node at the beggining of listint_t
  *
  *@head : Pointer to the head of the singly link list
  *@n: Ingeter to the added to the node
  *
  *Return: New node
  *
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
