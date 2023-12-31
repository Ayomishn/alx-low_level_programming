#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * _isalpha takes in a character
 * @c: character to be checked
 * Return: 1 if letter, lowercase, uppercase; 0 for otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
