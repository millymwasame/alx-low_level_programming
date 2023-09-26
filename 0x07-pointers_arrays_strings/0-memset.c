#include "main.h"

/**
 * _memset -Fills the first n bytes of the memory area pointed to by s with constant byte b
 * @s: pointer to memory that needs to be filled
 * @b: constant byte to fill with
 * @n: number of bytes to fill
 * Return:to pointer s
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
