#include <stdio.h>
/**
*main - Lists all natural numbers below 1024 (excluded)
* that are multiples of 3 or 5.
*
* Return: Always 0.
*/
int main(void)
{
	int i, z = 0;
		while (i < 1024)
		{
			if (((i % 3) == 0) || ((i % 5) == 0))
			{
				z += i;
			}
			i++;
		}
	printf("%d\n", z);
	return (0);
}
