#include <stdio.h>
#include <stdlib.h>

/**
  *@malloc_checked - Allocates Memory using malloc
  *
  *@b : Unsigned int variable(Parmater)
  *
  * Return: Void
  *
 **/

void *malloc_checked(unsigned int b)
{
	void *ptr;
	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
