#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints number, followed by a new line
 * @separator: The strin to be printed btn numbers
 * @n: The number of integers to be passed to the function
 * @..: number of varibale to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list no;
	unsigned int index;

	va_start(no, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(no, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(no);
}
