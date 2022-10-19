#include "main.h"

/**
 * _isalpha - checks for the alphabetic character
 * @c: the char to be checked
 *
 * Return: 1 if char is a letter lower or upper, return 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && <= 'Z'))
		return (1);
	else
		return (0);
}
