#include "main.h"
#include <stdio.h>

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

if (size > 0)
{
for (a = 1; a <= size; a++)
{
for ((b = size - a); b > 0; b--)
_putchar(' ');

for (b = 0; b < a; b++)
_putchar('#');

if (a == size)
continue;

_putchar('\n');
}
}
_putchar('\n');
}
