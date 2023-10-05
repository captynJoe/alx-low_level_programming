#include <stdio.h>
/**
 * main - print various sizes in pc
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of char: %lu byte(s)\n", sizeof(char));
printf("Size of int: %lu byte(s)\n", sizeof(int));
printf("Size of float: %lu byte(s)\n", sizeof(float));
printf("Size of double: %lu byte(s)\n", sizeof(double));
printf("Size of long: %lu byte(s)\n", sizeof(long));
printf("Size of long long: %lu byte(s)\n", sizeof(long long));
return (0);

}

