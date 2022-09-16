
#include <stdio.h>
/**
 *main - print first 50 fibonacci
 *
 *Return: 0 always.
 */
int main(void)
{
long int i;
long int a = 1;
long int b = 2;
long int result = 0;

for (i = 0; i < 49; i++)
{
printf("%ld, ", a);
result = a + b;
a = b;
b = result;
if (i == 48)
printf("%ld\n", a);
}
return (0);
}
