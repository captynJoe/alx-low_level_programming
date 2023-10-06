#include <stdio.h>

/**
 * main - main function task9
 * Return: Always 0
 */

int main(void)
{
int i;

for (i = 0 ; i < 10 ; i++)
{
	putchar(i + '0');
	putchar(',');
	putchar(' ');

}
putchar('\n');
return(0);

}
