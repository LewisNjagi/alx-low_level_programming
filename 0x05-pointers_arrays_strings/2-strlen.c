#include "main.h"
/**
 *_strlen - returns the length of a string
 * @s: string
 *Return: returns lenght;
 */
int _strlen(char *s)
{
int s, len;
len = 0;
for (s = 0; s[s] != '\0'; s++)
len++;

return (len);
}
