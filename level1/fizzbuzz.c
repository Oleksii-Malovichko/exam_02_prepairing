/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 18:42:13 by alex              #+#    #+#             */
/*   Updated: 2024/12/18 19:01:49 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_itoa(int n)
{
	int	result;

	result = 0;
	if (n == 0)
	{
		write(1, "0\n", 2);
		return ;
	}
	if (n >= 10)
	{
		ft_itoa(n / 10);
	}
	result = n % 10 + '0';
	write(1, &result, 1);
}

int main(void)
{
	int	i = 1;
	int	flag = 0;

	while (i <= 100)
	{
		flag = 0;
		if (i % 3 == 0 && i % 5 == 0)
		{
			write(1, "fizzbuzz\n", 9);
		}
		else if (i % 3 == 0)
			write(1, "fizz\n", 5);
		else if (i % 5 == 0)
			write(1, "buzz\n", 5);
		
		else
		{
			ft_itoa(i);
			write(1, "\n", 1);
		}
		i++;
	}
}
