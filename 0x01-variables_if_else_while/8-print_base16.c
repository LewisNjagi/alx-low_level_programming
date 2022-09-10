#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
int i, b;
for (i = 0; i < 10; i++)
{
putchar (i + '0');
}
for (b = 'a'; b <= 'f'; b++)
{
putchar (b);
}

putchar('\n');
return (0);
}
