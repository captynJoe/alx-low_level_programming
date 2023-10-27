/**
 * main - Print the name of the program
 * @argc: Count of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
/* Declaring variables */
int count;
int str_to_int;
int sum = 0;

count = 1;
while (count < argc) /* Goes through the whole array */
{
if (check_num(argv[count]))
{
str_to_int = atoi(argv[count); /* ATOI --> convert string to int */
sum += str_to_int;
}
/* Condition if one of the numbers contains symbols that are not digits */
else
{
printf("Error\n");
return (1);
}
count++;
}

printf("%d\n", sum); /* Print the sum */

return (0);
}

