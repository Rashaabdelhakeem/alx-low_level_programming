#include <stdio.h>

/**
 * _memset - Fills Memory with constant bytes
 * @s: pointers for the memory area
 * @b: bytes to fill with
 * @n: number of bytes
 *
 * Return: pointer to mem area
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

