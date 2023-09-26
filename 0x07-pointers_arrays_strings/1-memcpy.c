#include "main.h"

/**
 *_memcpy: copies memory from one area to another
 * @src: pointer to the char parameters
 * @dest: pointer to the char parameters
 *@n: size copied
 * Return: *dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[j] = src[i];
	}
	return (dest);
}
