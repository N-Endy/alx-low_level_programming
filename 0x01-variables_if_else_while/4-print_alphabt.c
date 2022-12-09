#include <stdio.h>

/**
 *main - Entry point for all C programs
 *
 *Description: Prints all aphabet from a to z except e and q
 *Return: Returns 0 on successful completion of program
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	}
	putchar('\n');
	return (0);
}
