#include "main.h"

/**
  * swap_int - Swaps the value of two pointer variable
  *
  * @a: first integer pointer variable
  * @b: Second integer pointer variable
  *
 **/

void swap_int(int *a, int *b)
{
	int value1, value2;

	value1 = *a;
	value2 = *b;

	*a = value2;
	*b = value1;
}
