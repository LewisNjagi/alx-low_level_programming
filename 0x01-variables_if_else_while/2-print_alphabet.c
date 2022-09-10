#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main block
 * Return: 0
 */
int main(void)
{
char lc = 'a';

while (lc <= 'z')
{
putchar(lc);
lc++;
}
putchar('\n');

return (0);
}
