#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
	* _islower - character case checker
	*
	*	@c : a character
	*
	* Return: (0) or (1) success;
	*
	**/
int _islower(int c)
{
	int y;

	if ((c >= 97) && (c <= 122))
	{
		y = 1;
	}
	else
	{
		y = 0;
	}
	return (y);
}

