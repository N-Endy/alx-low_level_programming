#include <stdio.h>

/**
 *main - Entry point for all C programs
 *
 *Description:
 *Return: Returns 0 on successful completion of program
 */
int main(void)
{
	char a, z, counter;

	a = 'a';
	z = 'z';
	counter = a;
	while (counter <= z)
	{
		putchar(counter);
		counter++;
	}
	return (0);
}
