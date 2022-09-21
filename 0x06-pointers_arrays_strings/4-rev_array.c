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
	int new[n], rev;
	int y = 0, x = n - 1;

	while ((x >= 0) && (y < n))
	{
		new[y] = a[x];
		x--;
		y++;
	}
	rev = 0;
	while (rev < n)
	{
		a[rev] = new[rev];
		rev++;
	}
}
