#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - This is the main function of the program
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d, is a positive", n);
	else if (n == 0)
		printf("%d is a zero", n);
	else
		printf("%d is a negative", n);
	return (0);

}
