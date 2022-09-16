#include "main.h"

/**
 * print_square - main entry point for the program.
 *
 * @n: Iterator.
 *
 * Return: void
 */

void print_square(int n)
{
int a;
int b;

for (a = 0; a < n; a++)
{
for (b = 0; b < n; b++)
{
_putchar('#');
}
_putchar('\n');
}
if (n <= 0)
{
_putchar('\n');
}
}
