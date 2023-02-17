#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0if succesful
 */

int main(void)
{
char abc;

for (abc = 'z'; abc >= 'a'; abc--)
{
putchar(abc);
}
putchar('\n');
return (0);
}
