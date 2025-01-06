/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 13:27:12 by alex              #+#    #+#             */
/*   Updated: 2024/12/19 14:08:05 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	fill_buffer_ascii(char *buffer1, char *buffer2)
{
	int	i;
	int j = 0;

	i = 97;
	while (i <= 122)
	{
		buffer1[j] = i;
		j++;
		i++;
	}
	buffer1[j] = '\0';
	i = 65;
	j = 0;
	while (i <= 90)
	{
		buffer2[j] = i;
		j++;
		i++;
	}
	buffer2[j] = '\0';
}

int	ft_strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	find_element(char *buffer1, char *buffer2, char ch)
{
	int	i = 0;

	if (ch >= 'a' && ch <= 'z')
	{
		while (i < 26)
		{
			if (buffer1[i] == ch)
				break;
			i++;
		}
		return (buffer1[(ft_strlen(buffer1) - 1) - i]);
	}
	else
	{
		while (i < 26)
		{
			if (buffer2[i] == ch)
				break;
			i++;
		}
		return (buffer2[(ft_strlen(buffer1) - 1) - i]);
	}
}

int main(int n, char **args)
{
	int	i = 0;
	char	buffer_lc[27] = {0};
	char	buffer_uc[27] = {0};

	fill_buffer_ascii(buffer_lc, buffer_uc);

	if (n == 2)
	{
		while (args[1][i] != '\0')
		{
			if ((args[1][i] >= 'a' && args[1][i] <= 'z') || (args[1][i] >= 'A' && args[1][i] <= 'Z'))
			{
				args[1][i] = find_element(buffer_lc, buffer_uc, args[1][i]);
			}
			write(1, &args[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
