#include "main.h"

/**
*puts_half - puts half of a string
*@str: string
*Return:void
*/

void puts_half(char *str)
{
int len = _strlen(str);

if (len % 2 == 0)
len = len / 2;

else
len = (len + 1) / 2;

while (str[len] != '\0')
{
_putchar(str[len]);
len++;
}
_putchar('\n');
}

/**
 *_strlen - returns the length of a string
 * @s: string
 *Return: returns length;
 */

int _strlen(char *s)
{
int n, len;
len = 0;
for (n = 0; s[n] != '\0'; n++)
len++;

return (len);
}
