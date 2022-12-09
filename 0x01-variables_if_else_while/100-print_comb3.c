#include <stdio.h>

/**
 *main - Entry point for all C programs
 *
 *Description: Prints all possible combination os two digits
 *Return: Returns 0 on successful completion of program
 */
int main(void)
{
	int i, j;

	for (i = 48; i < 57; i++)
	{
		for (j = 49; j <= 57; j++)
		{
			if (j > i)
			{
				putchar(i);
				putchar(j);
				if (i < 56 || j < 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
