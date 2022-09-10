#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
int c;
int t = 0;

while (t < 10)
{
c = 0;
while (c < 10)
{
if (t != c && t < c)
{
putchar('0' + t);
putchar('0' + c);

if (c + t != 17)
{
putchar(',');
putchar(' ');
}
}

c++;
}
t++;
}
putchar('\n');
return (0);
}
