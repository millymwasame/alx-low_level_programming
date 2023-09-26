#include "main.h"

/**
 * _strchr -  locates character in a string
 * @s: pointer to char
 * @c: char parameter to found
 * Return: *S
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
return (0);
}
