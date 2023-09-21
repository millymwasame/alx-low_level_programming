#include "main.h"
/**
 * Appends the src string to the dest string
 * Overwrites the terminating null byte at the end of dest
 * Adds a terminating null byte
*/

char *_strcat(char *dest, char *src)
{
int c = -1, i;
for (i = 0; dest[i] != '\0'; i++)
;

do {
	c++;
	dest[i] = src[c];
	i++;
} while (src[c] != '\0');

return (dest);
}

