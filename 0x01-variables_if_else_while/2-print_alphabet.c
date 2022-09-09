#include <stdio.h>
#include <stdlib.h>

/**
  * main- Entry point
  *
  * Return: (0) Sucess
  *
 **/
int main(void)
{
	char ch, emp;

	emp = '\n';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
		putchar(emp);
	return (0);
}
