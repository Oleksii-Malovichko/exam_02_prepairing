/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 19:25:32 by alex              #+#    #+#             */
/*   Updated: 2024/12/18 20:02:36 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	find_num1(char ch)
{
	int	counter = 0;
	int	new_counter = 0;
	while (ch <= 'z' && counter != 13)
	{
		ch++;
		counter++;
	}
	new_counter = 13 - counter;
	if (new_counter != 0)
	{
		ch = 'a';
		while (new_counter > 0)
		{
			ch++;
			new_counter--;
		}
	}
	if (ch == '{')
	{
		ch = 'a';
	}
	return(ch);
}

char	find_num2(char ch)
{
	int	counter = 0;
	int	new_counter = 0;
	while (ch <= 'Z' && counter != 13)
	{
		ch++;
		counter++;
	}
	new_counter = 13 - counter;
	if (new_counter != 0)
	{
		ch = 'A';
		while (new_counter > 0)
		{
			ch++;
			new_counter--;
		}
	}
	if (ch == '[')
	{
		ch = 'A';
	}
	return(ch);
}

int	main(int n, char **args)
{
	int	i = 0;
	char ch;

	if (n == 2)
	{
		while (args[1][i] != '\0')
		{
			if (args[1][i] >= 'a' && args[1][i] <= 'z')
			{
				ch = find_num1(args[1][i]);
				write(1, &ch, 1);
			}
			else if (args[1][i] >= 'A' && args[1][i] <= 'Z')
			{
				ch = find_num2(args[1][i]);
				write(1, &ch, 1);
			}
			else
				write(1, &args[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
 