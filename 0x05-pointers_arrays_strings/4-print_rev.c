#include "main.h"

/**
* print_rev - prints a string in reverse
* @s: string to print
*/

void print_rev(char *s)
{
int num = 0, i = 0;
num = _strlen(s);

for (i = num - 1; i >= 0; i--)
_putchar(s[i]);

_putchar('\n');
}

int _strlen(char *s)
{
int n, len;
len = 0;
for (n = 0; s[n] != '\0'; n++)
len++;

return (len);
}
