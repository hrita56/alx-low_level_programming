#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - this returns the summ of all parametter
 * @n: number of function parametter
 * @...: variable to calculate the sum
 * Return: if n == 0, otherwise sum of all parametter
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int i, sum = 0;

	va_start(a, n);

	for (i = 0 ; i < n ; i++)
		sum += va_arg(a, int);

	va_end(a);

	return (sum);
}
