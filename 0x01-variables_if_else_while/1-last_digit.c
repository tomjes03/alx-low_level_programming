#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *Return: 0 Always (success)
 */
int main(void)
{
int n, r;
srand(time(0));
n = rand() - RAND_MAX / 2;
r = n % 10;
printf("Last digit of %d is %d ", n, r);
if (r > 5)
printf("and is greater than 5\n");
else if (r == 0)
printf("and is 0\n");
else if (r < 6 && r != 0)
printf("and is less than 6 and not 0\n");
return (0);
}
