#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
  * main - Entry Point
  *
  * Return: (0) Sucess
  *
  **/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n  >  0)
	{
		printf("%d is positivei\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n  <  0)
	{
		printf("%d is negative\n", n);
	};

	return (0);
}
