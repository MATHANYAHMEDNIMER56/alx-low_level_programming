#include <stdio.h>

/* betty style doc for function main goes there */
/**
  *main - this function to get lower alpha
  *Return: Always 0
  */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ;  i++)
		putchar(i);
	for (i = 'A' ; i <= 'Z' ;  i++)
		putchar(i);
	putchar('\n');
	return (0);
}
