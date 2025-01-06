#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int get_len(int n)
{
	int	counter = 0;
	int result = 0;
	int sign = 1;
	if (n < 0)
	{
		n = -n;
		counter++;
	}
	while (n > 0)
	{
		result = (n % 10) + '0';
		n = n / 10;
		counter++;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	int result = 0;
	int len = get_len(n);
	if (n == 0)
		return NULL;
	char *buffer = (char *)malloc(sizeof(char) * len + 1);
	if (!buffer)
		return (NULL);
	if (n < 0)
	{
		buffer[0] = '-';
		n = -n;
	}
	int i = len - 1;
	while (n > 0)
	{
		result = (n % 10) + '0';
		n = n / 10;
		buffer[i] = result;
		i--;
	}
	buffer[len] = '\0';
	return (buffer);
}

int main()
{
	printf("%s\n", ft_itoa(919101));
}