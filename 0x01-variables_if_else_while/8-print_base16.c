#include <stdio.h>

/**
 *main - Entry point for all C programs
 *
 *Description: Prints the character for hexadecimal
 *Return: Returns 0 on successful completion of program
 */
int main(void)
{
	int i;
	char ch;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
