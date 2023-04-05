#include "main.h"

/**
 * factorial- finds the factorials
 * @n: the input number
 * return: the factorial of an input number, -1 if the input number is 0
 **/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n -1));
}

