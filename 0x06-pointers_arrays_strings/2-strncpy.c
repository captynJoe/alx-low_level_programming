#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: inputs tje value
 * @src: inputs the value
 * @n: inputs the value
 * Return: dest 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}

