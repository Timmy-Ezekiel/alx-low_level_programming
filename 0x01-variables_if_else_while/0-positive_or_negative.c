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
		printf("is positivei\n");
	}
	else if (n == 0)
	{
		printf("is zero\n");
	}
	else if (n  <  0)
	{
		printf("is negative\n");
	};

	return (0);
}
