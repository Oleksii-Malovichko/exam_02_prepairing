/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 18:29:17 by alex              #+#    #+#             */
/*   Updated: 2024/12/18 18:40:56 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int n, char **args)
{
	int	i;

	i = 0;
	if (n == 2)
	{
		while (args[1][i] == 32 || args[1][i] == 9)
			i++;
		while (args[1][i] != '\0' && args[1][i] != 32 && args[1][i] != 9)
		{
			write(1, &args[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
