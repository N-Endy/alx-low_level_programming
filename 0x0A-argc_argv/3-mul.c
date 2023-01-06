#include <stdio.h>

/**
 * main - Multiplies two numbers
 * @argc: Number of arguments
 * @argv: Array of strings for arguments
 *
 * Return: Return 0 if successful an 1 if Error
 */

int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		mul *= atoi(argv[i]);
	}
	printf("%d\n", mul);
	return (0);
}
