#include <stdio.h>

/**
  * reverse_array - reverse an integer variable
  *
  * @a : an interger pointer (array)
  * @n : an integer varible (Length of array)
  *
  * Return: void Success
  *
 **/

void reverse_array(int *a, int n)
{
	int tmp, x;

	for (x = 0; x <= n/2; x++)
	{
		tmp = a[x];
		a[x] = a[n - 1 - x];
		a[n - 1 - x] = tmp;
	}
}
