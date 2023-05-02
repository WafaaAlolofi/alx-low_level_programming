#include "main.h"
/**
* print_rev - reversa the length of the string
* @s: string
* return: 0
*/

#include <stdio.h>

void print_rev(char *s)
{
int len = 0;
int i;
while (*s != '\0')
{
len++;
s++;
}



for (i= len-1; i >= 0; i--)
{
putchar(*(s + i));
}
putchar('\n');
}
