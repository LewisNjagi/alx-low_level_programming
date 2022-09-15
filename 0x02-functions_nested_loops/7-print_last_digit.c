#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_last_digit - main-entry point for the program.
 *
 * @n : character passed as n.
 *
 * Return: l
 */

int print_last_digit(int n)
{
int l = n % 10;

if (l < 0)
l *= -1;
_putchar(l + '0');
return (l);
}

