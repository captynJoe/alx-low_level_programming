#include "main.h"

/**
 * _isalpha - Alphabetic char
 * c - The main int
 * Return:1
 */

int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
