#include "main.h"

/**
*rev_string - Reverse a string
*@s: String to reverse
*Return: Nothing
*/

void rev_string(char *s)
{
int i = 0, len;
len = _strlen(s) - 1;
while (len > i)
{
swap_char(s + len, s + i);
i++;
len--;
}
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

/**
*swap_int - swap two integers
*@a: first integer
*@b: second integer
*Return: nothing
*/

void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
