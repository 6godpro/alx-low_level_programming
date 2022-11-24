#include <stdio.h>

/**
 * main - entry point
 * Description: This is a program that prints all possible different
 * combinations of two digits excluding doubles
 * Return: 0 for success and non zero for error
 */

int main(void)
{
	int Num1, Num2;

	for  (Num1 = 0; Num1 < 9; Num1++)
	{
		for (Num2 = (Num1 + 1); Num2 <= 9; Num2++)
		{
			if (Num1 != Num2)
			{
				putchar(Num1 + '0');
				putchar(Num2 + '0');
			}
			if (Num1 == Num2)
				continue;
			if (Num1 == 8 && Num2 == 9)
				break;

			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');
	return (0);
}
