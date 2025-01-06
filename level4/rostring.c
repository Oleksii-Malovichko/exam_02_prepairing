#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	get_len(char *str)
{
	int i = 0;
	int j = 0;
	while (str[i] == ' ' || str[i] == 4)
		i++;
	while (str[i] != '\0' && str[i] != ' ' && str[i] != 4)
	{
		j++;
		i++;
	}
	return j;
}

void	get_first_word(char *temp, char *arg)
{
	int i = 0;
	int j = 0;
	while (arg[i] == ' ' || arg[i] == 4)
		i++;
	while (arg[i] != '\0' && arg[i] != ' ' && arg[i] != 4)
	{
		temp[j] = arg[i];
		j++;
		i++;
	}
	temp[j] = '\0';
}

int	get_len_result(char *arg)
{
	int i = 0;
	int j = 0;
	while (arg[i] == ' ' || arg[i] == 4) // пропустили первые пробелы/табы
		i++;
	while (arg[i] != '\0' && arg[i] != ' ' && arg[i] != 4) // пропустили первое слово
		i++;
	while (arg[i] == ' ' || arg[i] == 4)
		i++;
}

void	rostring(char **str)
{
	char	*temp;
	char	*result;
	int len_temp = get_len(*str);
	int	len_result = get_len_result(*str);
	temp = malloc(len_temp + 1);
	if (!temp)
		return ;
	get_first_word(temp, *str);
	

}

int main(int n, char **args)
{
	if (n >= 2)
	{
		rostring(&args[1]);
	}
	write(1, "\n", 1);
}