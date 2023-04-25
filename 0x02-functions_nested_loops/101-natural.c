#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
*/

/*
* File: 101-natural.c
*main- Entry point
*Descriotion:  main - Lists all the natural numbers below 1024 (excluded)
* that are multiples of 3 or 5.
*Return: Always 0.
*/
int main(void)
{
int i, sum = 0;
for (i = 0; i < 1024; i++)
{
if ((i % 3 == 0) || (i % 5 == 0))
{
sum = sum + i;
}
}
printf("%d\n", sum);

return (0);
}
