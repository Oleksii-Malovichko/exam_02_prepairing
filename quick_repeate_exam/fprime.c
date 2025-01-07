#include <stdio.h>

int main()
{
	int n = 225225;
	int i = 2;
	while (i <= n)
	{
		if (n % i == 0)
		{
			printf("%d", i);
			if (i == n)
				break;
			printf("*");
			n /= i;
			i = 1;
		}
		i++;
	}
}