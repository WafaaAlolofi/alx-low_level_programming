#include "main.h"
/**
* _isdigit - check if numbers are 0 - 9
* @c: char to be checked
**
*Return: 0 or 1
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)/* ASCII(0)=48 and ASCII(9)=57*/
	return (1);
	else
	return (0);
}
