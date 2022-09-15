#include "main.h"

/**
 * print_alphabet_x10-main-entry point for the program.
 *
 * Description: prints 10 times the alphabet, in lowercase.
 *
 * Return: Nothing.
 */

void print_alphabet_x10(void)
{
int t = 0;

while (t < 10)
{
char a = 'a';
while (a <= 'z')
{
_putchar(a);
a++;
}
_putchar('\n');
t++;
}
}
