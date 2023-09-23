#include "main.h"
/**
 * __strcat concatenates two strings
 * @dest: pointer destination
 * @src: pointer source
 * Return: void
*/

char *_strcat(char *dest, char *src)
{
int m = -1, b;
for (m = 0; dest[b] != '\0'; m++)
;

do {
	m++;
	dest[b] = src[m];
	b++;
} while (src[m] != '\0');

return (dest);
}
