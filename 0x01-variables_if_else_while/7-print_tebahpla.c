#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
char r = 'z';

while (r >= 'a')
{
putchar(r);
r--;
}

putchar('\n');
return (0);
}
