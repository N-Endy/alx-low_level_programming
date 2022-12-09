#include <stdio.h>

/**
 *main - Entry point for all C programs
 *
 *Description: Prints all possible combination os two digits
 *Return: Returns 0 on successful completion of program
 */
int main(void)
{
	int i, j, k;

	for (i = 48; i < 56; i++)
	{
		for (j = 49; j < 57; j++)
		{
			for (k = 50; k < 58; k++)
			{
				if (j > i && k > j)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i != 55 || j != 56 || k != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
