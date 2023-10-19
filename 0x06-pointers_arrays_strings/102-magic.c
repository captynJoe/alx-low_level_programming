#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description:
 * - Declares an integer variable n, an array of integers a with 5 elements
 * - Sets the value of the third element in array a (a[2]) to 1024.
 * - Points the pointer p to the address of the integer variable n.
 * - Modifies the value of the integer variable n
 * - Prints the modified value of a[2] to the standard output.
 * Return: 0 to indicate successful execution of the program.
 */

int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;
/*
 * write your line of code here...
 * Remember:
 * - you are not allowed to use a
 * - you are not allowed to modify p
 * - only one statement
 * - you are not allowed to code anything else than this line of code
 */
*(p + 5) = 98;
/* ...so that this prints 98\n */
printf("a[2] = %d\n", a[2]);
return (0);
}

