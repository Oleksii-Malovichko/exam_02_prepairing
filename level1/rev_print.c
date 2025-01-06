/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 19:18:11 by alex              #+#    #+#             */
/*   Updated: 2024/12/18 19:24:05 by alex             ###   ########.fr       */
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

char *rev_print(char *str)
{
	int i = ft_strlen(str) - 1;
	
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
}

int main()
{
	rev_print("Hello world");
	write (1, "\n", 1);
	rev_print("tnirp esreveR");
	write (1, "\n", 1);
	rev_print("");
	write (1, "\n", 1);
}