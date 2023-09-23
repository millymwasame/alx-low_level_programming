#include "main.h"
/**
 * concatenates two strings
 * __strncat function is similar to the _strcat function
 * it will use at most n bytes from src
 * src does not need to be null-terminated if it contains n or more bytes
 * Return a pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int index, count;

	for (index = 0; dest[index] != '\0'; index++)
		;
	for (count = 0; count < n && src[count] != '\0'; count++)
	{
		dest[index] = src[count];
		index++;
	}
	if (count < n)
	{
	dest[index] = '\0';
	}
	return (dest);
}
