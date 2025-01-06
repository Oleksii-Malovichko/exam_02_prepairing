/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 20:56:28 by alex              #+#    #+#             */
/*   Updated: 2025/01/06 17:52:40 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **args)
{
    if (ac == 3)
    {
		char	buffer[256] = {0};
		int	i = 0;
		int	i_buffer = 0;
		while (args[1][i] != '\0')
		{
			int	found = 0;
			int j = 0;
			while (j < 256)
			{
				if (args[1][i] == buffer[j])
					found = 1;
				j++;
			}
			if(found == 0)
			{
				buffer[i_buffer] = args[1][i];
				i_buffer++;
				write(1, &args[1][i], 1);
			}
			i++;
		}
		i = 0;
		while (args[2][i] != '\0')
		{
			int	found = 0;
			int j = 0;
			while (j < 256)
			{
				if (args[2][i] == buffer[j])
					found = 1;
				j++;
			}
			if(found == 0)
			{
				buffer[i_buffer] = args[2][i];
				i_buffer++;
				write(1, &args[2][i], 1);
			}
			i++;
		}
    }
    write(1, "\n", 1);
    return 0;
}
