#include <stdio.h>

/**
 *main - check for multiples of 3 and 5
 *
 *Return: 0
 */

int main(void)
{
int a = 1024;
int b;
int s = 0;
for (b = 0; b < a; b++)
{
if ((b % 3 == 0) || (b % 5 == 0))
{
s = s + b;
}
}
printf("%d\n", s);
return (0);
}
