#include "main.h"
#include <ctype.h>

/**
 *  _islower - main-entry point for the program.
 *
 * @c : character passed as c.
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
if (islower(c))
{
return (1);
}
else
{
return (0);
}
}
