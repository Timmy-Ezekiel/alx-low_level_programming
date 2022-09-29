#include "main.h"

int is_prime_function(int n, int x);
/**
  *is_prime_number - Primes 1 if a number is prime otherwise.
  *
  * @n : Integer number to be checked.
  *
  *Return: 0 or 1 Success
  *
 **/

int is_prime_number(int n)
{
	int x;

	if (n <= 1)
	{
		return (0);
	}
	x = is_prime_function(n, 2);
	return (x);
}

/**
  * is_prime_function - Checkes for possible factors of n
  *
  * @n : integer to be checked
  * @x : numbers to start checking from
  *
  * Return: 0 or 1
  *
 **/

int is_prime_function(int n, int x)
{
	if ((n % x == 0) && (x != n))
	{
		return (0);
	}
	else if (x == n)
	{
		return (1);
	}
	else
	{
		return (is_prime_function(n, x + 1));
	}
}
