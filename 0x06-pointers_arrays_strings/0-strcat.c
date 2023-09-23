#include "main.h"
/**
 * *__strcat concatenates two strings
 * @dest: pointer destination
 * @src: pointer source
 * Return: void
*/

char *_strcat(char *dest, char *src)
{
int i = -1, b;
for (i = 0; dest[b] != '\0'; i++)
;

do {
	i++;
	dest[b] = src[i];
	b++;
} while (src[i] != '\0');

return (dest);
}
