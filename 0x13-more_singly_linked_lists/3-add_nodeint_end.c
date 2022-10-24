#include <stdio.h>
#include "lists.h"

/**
  *add_nodeint_end -Add new node at the end of the singly linked list
  *
  *@head : pointer to the head of the node
  *@n : Integer to input at the node
  *
  *Return: New node
  *
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *lastnode;

	/*Allocated memory for the new pointer*/
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	/*Intialized variable n to the Node*/
	newnode->n = n;
	/*Let the newnode pointer points to Null*/
	newnode->next = NULL;
	/*checks if head points to null for futher steps*/
	if (*head == NULL)
		*head = newnode;
	else
	{
		lastnode = *head;
		/*This run if head doesnt point to NULL*/
		while (lastnode->next != NULL)
			lastnode = lastnode->next;
		lastnode->next = newnode;
	}
	return (newnode);
}
