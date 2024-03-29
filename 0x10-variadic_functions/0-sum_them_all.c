#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* sum_them_all - returns the sum of all its paramters
*@n: the number of paramters passed to the function
*@...: a variable namber of paramters to calculate the sum of
*Return: if n == 0 - 0
*    otherwise - the sum of all paramters
*/
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum = 0;
va_list ap;
va_start(ap, n);
for (i = 0; i < n; i++)
sum += va_arg(ap, int);
va_end(ap);
return (sum);
}
