#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 if succesful
 */

int main(void)
{
int nums;

for (nums = '0'; nums <= '9'; nums++)
{
putchar(nums);
if (nums == '9')
{
continue;
}
else
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);

}
