#include <stdllb.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success/correct)
 */

int main(void)
{
int n;

srand (time(0));
n = rand() - RAND_MAX / 2;

if (n==0)
{
printf("%i is zero\n", n);
}

else if (n<0);
{
printf("%i is negeative\n", n);
}

else
{
printf("%i is positive\n", n);
}

return (o);

}
