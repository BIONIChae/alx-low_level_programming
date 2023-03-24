#include "variadic_functions.h"

/**
 * print_char - Prints a character.
 * @c: The character.
 *
 * Return: void
 */

void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_int - Prints an integer.
 * @i: The integer.
 *
 * Return: void
 */
void print_int(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_float - Prints a float.
 * @f: The float.
 *
 * Return: void
 */
void print_float(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_string - Prints a string.
 * @s: The string.
 *
 * Return: void
 */
void print_string(va_list s)
{
	char *str = va_arg(s, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - Prints anything.
 * @format: List of types arguments passed to the function.
 *
 * Return: Any other char should be ignored.
 *         If NULL, print (nil).
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	print_t struc[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(struc[j].d_type)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			struc[j].func(args);
			separator = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(args);
}
