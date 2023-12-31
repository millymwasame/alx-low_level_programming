#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area pointed to by s withb constant byte
 * @s: pointer to char parameter
 * @b: constant byte
 * @n: number of bytes
 * Return: *s
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
