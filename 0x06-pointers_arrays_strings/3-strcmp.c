#include "main.h"

/**
 * _strcmp - copie the string
 * @s1: param1
 * @s2: param2
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
int i = 0, x = 0;

while (s1[i] != '\0' && x == 0)
{
x = s1[i] - s2[i];
i++;
}

return (x);
}
