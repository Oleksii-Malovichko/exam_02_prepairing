#include <stdio.h>
#include <stdlib.h>

int	is_prime(int n)
{
	int	i = 2;
	if (n < 0)
		return 0;
	if (n == 1)
		return 1;
	while (i * i < n)
	{
		if (n % i == 0)
			return 0;
		i++;
	}
	return 1;
}

int main(int n, char **args)
{
	if (n == 2)
	{
		int i = 2;
		int num = atoi(args[1]);
		if (num == 1)
			printf("1");
		while (i <= num)
		{
			if (num % i == 0 && is_prime(i))
			{
				printf("%d", i);
				if (i == num)
					break;
				printf("*");
				num /= i;
				i = 1;
			}
			i++;
		}
	}
	printf("\n");
}