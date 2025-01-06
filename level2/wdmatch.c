/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 18:47:46 by alex              #+#    #+#             */
/*   Updated: 2024/12/19 21:02:15 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_putstr(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(int n, char **args)
{
	int i = 0, j = 0, found;

	if (n == 3)
	{
		while (args[1][i] != '\0')
		{
			found = 0;
			while (j < ft_strlen(args[2]))
			{
				if (args[2][j] == args[1][i])
				{
					found = 1;
					break ;
				}
				j++;
			}
			if (!found)
				break ;
			i++;
		}
		if (args[1][i] == '\0')
			ft_putstr(args[1]);
	}
	write(1, "\n", 1);
}