#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 if succesful
 */

int main(void)
{
char abc;

for (abc = 'a'; abc <= 'z'; abc++)
{
if (abc == 'q' || abc == 'e')
{
continue;
}
putchar(abc);
}

putchar('\n');
return (0);
}
