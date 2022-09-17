#include <stdio.h>

/**
* main- prints the largest prime factor of a number
*
*Return: returns 0
*/

int main(void)
{
long num = 612852475143;
int x;
while (x++ < num / 2)
{
if (num % x == 0)
{
num /= 2;
continue;
}

for (x = 3; x < num / 2; x += 2)
{
if (num % x == 0)
num /= x;

}
}
printf("%ld\n", num);
return (0);
}
