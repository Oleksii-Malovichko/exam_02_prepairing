/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:35:10 by alex              #+#    #+#             */
/*   Updated: 2024/12/19 17:04:06 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strcmp(char ch, char *str, int flag)
{
	int	i = 0;
	if (flag == 0)
	{
		while (str[i] != '\0')
		{
			if (str[i] == ch)
				return (1);
			i++;
		}
	}
	else
	{
		while (i < 256)
		{
			if (str[i] == ch)
				return (1);
			i++;
		}
	}
	return (0);
}

int main(int n, char **args)
{
	char	buffer[256] = {0};

	if (n == 3)
	{
		int i = 0;
		int	i_buffer = 0;
		while (args[1][i] != '\0')
		{
			if (ft_strcmp(args[1][i], args[2], 0))
			{
				if (!(ft_strcmp(args[1][i], buffer, 1)))
				{
					buffer[i_buffer] = args[1][i];
					write(1, &args[1][i], 1);
					i_buffer++;
				}
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
