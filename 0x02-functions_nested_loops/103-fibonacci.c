#include <stdio.h>

/**
 *main - print first 50 fibonacci
 *
 *Return: 0 always.
 */

int main(void)
{
long int i, a = 1, b = 2, result = 0, totalresult = 0;

for (i = 0; i < 49; i++)
{
if ((b % 2 == 0) && (b <= 4000000))
{
totalresult = totalresult + b;
}
result = a + b;
a = b;
b = result;
}
printf("%ld\n", totalresult);
return (0);
}
