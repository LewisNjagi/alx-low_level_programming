#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * main-entry point for the program.
 *
 *
 * Return: 0.
 */

int main(void)
{
char c[10] = "_putchar";
int i = 0;
while (i < 9)
{
_putchar(c[i]);
i++;
}
_putchar('\n');
return (0);
