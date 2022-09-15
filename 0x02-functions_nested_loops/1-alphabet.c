#include "main.h"

/**
 * print_alphabet-main-entry point for the program.
 *
 * Description: prints the english alphabet from a-z.
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
