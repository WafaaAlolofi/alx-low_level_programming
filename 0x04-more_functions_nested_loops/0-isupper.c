#include "main.h"
/**
*Function:  _isupper - to getting the  uppercase letters
* @c: char to check
*Return: 0 or 1
*/
int _isupper(int c)
{
	if (c >= 65  && c <= 90) /* A=ASCII(65)and Z=ASCII(90)*/
	return (1);
	else
	return (0);
}
