#include "main.h"

/**
 * times_table - main-entry point for the program.
 *
 * Return: void
 */

void times_table(void)
{
int a;
int b;
int result;
for (a = 0; a <= 9; a++)
{
_putchar('0');

for (b = 1; b <= 9; b++)
{
_putchar(',');
_putchar(' ');
result = a * b;
if (result <= 9)
_putchar(' ');
else
_putchar((result / 10) + '0');

_putchar((result % 10) + '0');
}
_putchar('\n');
}
}
