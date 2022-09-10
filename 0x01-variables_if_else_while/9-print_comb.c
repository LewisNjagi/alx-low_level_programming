#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
int s = 0;

while (s < 10)
{
putchar(48 + s);
if (s != 9)
{
putchar(',');
putchar(' ');
}
s++;
}
putchar('\n');
return (0);
}
