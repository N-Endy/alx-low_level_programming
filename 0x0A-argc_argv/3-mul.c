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
	int mul;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
