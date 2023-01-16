#include <stdio.h>

int max_prime_factor(long n)
{
    long mid = n/2, i, j, max = 2;

    for (i = 2; i <= mid; i++)
    {
        if (n % i == 0)
        {
            for (j = 2; j < i; j++)
            {
                if (i % j == 0)
                    break;
            }
        }
        else
            continue;

        if (i == j && i >= max)
            max = i;
    }
    printf("%lu\n", max);
    return (max);
}

int main()
{
    long prime = 612852475143;

    max_prime_factor(prime);

	return 0;
}
