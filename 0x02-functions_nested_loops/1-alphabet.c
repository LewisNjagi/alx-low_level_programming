#include "main.h"

/**
 * main-entry point for the program.
 *
 * print_alphabet - prints the english alphabet from a-z.
 *
 * Return: Nothing.
 */

void print_alphabet(void)
{
char a = 'a';
while (a <= 'z')
{
_putchar(a);
a++;
}
_putchar('\n');
}
