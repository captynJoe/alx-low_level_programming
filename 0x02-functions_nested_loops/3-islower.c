#include "main.h"

/**
 * _islower - Checks for lowercase
 * @c: The character to be checked in program
 * Return: 1 
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
