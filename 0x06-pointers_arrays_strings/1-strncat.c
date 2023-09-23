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

	int dest_len, i;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
	;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];

	/*ends with a end of string char*/
	dest[dest_len + i] = '\0';

	return (dest);
}
