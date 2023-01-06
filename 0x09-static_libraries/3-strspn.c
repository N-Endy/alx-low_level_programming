#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: String to search
 * @accept: Characters s must contain
 *
 * Return: the legth of the prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, a_len = 0, len = 0;

	while (accept[a_len] != '\0')
		a_len++;
	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; j < a_len; j++)
			if (s[i] == accept[j])
				len++, j = a_len;
			else
				if (j == a_len - 1)
					goto exit;
exit: return (len);
}
