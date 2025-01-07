#include <stdio.h>

void	ft_upper(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'f')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
}

int	ft_atoi_base(char *str, int base)
{
	int sign = 1;
	int result = 0;
	int value = 0;
	int i = 0;
	int ch;
	if (str[i] == '-')
	{
		sign = -sign;
		i++;
	}
	ft_upper(str);
	while (str[i] != '\0')
	{
		ch = str[i];
		if (ch >= 'A' && ch <= 'F')
		{
			value = ch - 'A' + 10;
		}
		else if (ch >= '0' && ch <= '9')
		{
			value = ch - '0';
		}
		else
			return 0;
		if (value >= base)
			return 0;
		result = result * base + value;
		i++;
	}
	return (sign * result);
}

int main()
{
	char str[] = "2a";
	printf("%d\n", ft_atoi_base(str, 16));
	// ft_upper(str);
}