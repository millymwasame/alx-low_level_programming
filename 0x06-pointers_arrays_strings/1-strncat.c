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

	int dest_len, m;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
	;

	for (m = 0; m < n && src[i] != '\0'; m++)
		dest[dest_len + m] = src[m];

	/*should end with a end of string char*/
	dest[dest_len + m] = '\0';

	return (dest);
}
