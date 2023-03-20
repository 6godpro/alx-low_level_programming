#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void password_generator(char *);

/**
 * main - Entry point to the program.
 * @argc: Command line argument count.
 * @argv: Vector of pointers.
 *
 * Return: Always 0.
 */
int main(int __attribute__((unused))argc, char **argv)
{
	password_generator(argv[1]);

	return (0);
}


/**
 * password_generator - Generates a random password.
 * @argv: Argument to generate password from.
 *
 */
void password_generator(char *argv)
{
	char password[7], *code;
	int len, tmp, i;

	len = strlen(argv);
	code = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	password[0] = code[(len ^ 59) & 63];

	tmp = 0;
	for (i = 0; i < len; i++)
		tmp += argv[i];
	password[1] = code[(tmp ^ 79) & 63];

	tmp = 1;
	for (i = 0; i < len; i++)
		tmp *= argv[i];
	password[2] = code[(tmp ^ 85) & 63];

	tmp = argv[0];
	for (i = 0; i < len; i++)
		if (tmp < argv[i])
			tmp = argv[i];
	srand(tmp ^ 14);
	password[3] = code[rand() & 63];

	tmp = 0;
	for (i = 0; i < len; i++)
		tmp += (argv[i] * argv[i]);
	password[4] = code[(tmp ^ 239) & 63];

	for (i = 0; i < argv[0]; i++)
		tmp = rand();
	password[5] = code[(tmp ^ 229) & 63];

	password[6] = '\0';

	printf("%s", password);
}
