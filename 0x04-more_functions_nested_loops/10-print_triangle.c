#include "main.h"

/**
 * print_triangle - a function that prints a triangle
 *
 * @size: size of the triangle
 *
 * Return: triangle of '#'s
 */

void print_triangle(int size)
{
int a;
int b;
int c;

if (size <= 0)
{
_putchar('\n');
}

for (a = 0; a < size; a++)
{
for (c = size - 1 - a; c > 0; c--)
{
_putchar(' ');
}
for (b = 0; b <= i; b++)
{
_putchar('#');
}
_putchar('\n');
}
}
