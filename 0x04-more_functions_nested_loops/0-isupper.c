#include "main.h"

/*Checks for uppercase character
 *Returns 1 if c is uppercase and 0 if otherwise
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
