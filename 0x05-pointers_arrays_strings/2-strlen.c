#include "main.h"

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
