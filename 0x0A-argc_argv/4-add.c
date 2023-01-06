#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers
 * @argc: Number of arguments
 * @argv: Array of strings for arguments
 *
 * Return: Return
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
	int i, j, sum = 0; /* variable to store the sum of the numbers */

	/* handle case where no numbers are passed to the program */
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	/* Iterate through command line argument */
	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i]; /* Get current argument */

		/* Check if the arg contains only digits */
		int is_digit = 1; /* Flag to indicate the arg is a digit */

		for (j = 0; arg[j] != '\0'; j++)
		{
			if (!isdigit(arg[j]))
			{
				is_digit = 0; /* arg is not a digit */
				break;
			}
		}

		if (!is_digit)
		{
			printf("Error\n");
			return (1);
		}

		/* Add the number to the sum */
		sum += atoi(arg);
	}

	/* Print sum */
	printf("%d\n", sum);

	return (0);
}
