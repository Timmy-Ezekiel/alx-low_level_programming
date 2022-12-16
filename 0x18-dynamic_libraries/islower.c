#include <stdio.h>

/**
  *_islower - check if a letter is lower
  *
  *@c : char to check
  *
  *Return: int
  *
 **/

int _islower(char c)
{
	if (c >= 'a' || c <= 'z')
	{
		printf("Yes");
	}
	else
		printf("No");
	return (0);
}
