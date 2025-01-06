#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void reverse_word(char **str, int start, int end)
{
	int len = end - start;
	int i = 0;
	char *temp = malloc(len + 1);
	if (!temp)
		return ;
	while (i < len)
	{
		temp[i] = (*str)[end - 1 - i];
		i++;
	}
	temp[i] = '\0';
	i = 0;
	while (i < len)
	{
		(*str)[start + i] = temp[i];
		i++;
	}
	free(temp);
}

char	*rev_wstr(char **str,int start, int end)
{
	int len = ft_strlen(*str);
	if (end >= len)
		return NULL;
	while (end < len && (*str)[end] != ' ' && (*str)[end] != 4)
	{
		end++;
	}
	reverse_word(str, start, end);
	end++;
	start = end;
	return (rev_wstr(str, start, end));
}

int main(int n, char **args)
{
	if (n == 2)
	{
		rev_wstr(&args[1], 0, 0);
		printf(args[1]);
	}
	write(1, "\n", 1);
}
