#include "main.h"

/**
 * _pow_recursion: raises x to the yth power
 * @x: the base number
 * @y: The power
 * return: the x to yth power (integer), -1 if y is less than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y -1));
}
