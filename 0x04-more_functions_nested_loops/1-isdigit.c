#include "main.h"

/*checks for a digit (0 through 9)
 * Returns 1 if c is a digit
 * Returns 0 is otherwise
*/

int _isdigit(int c)
{
  return (c >= 48 && c <= 57);
}
