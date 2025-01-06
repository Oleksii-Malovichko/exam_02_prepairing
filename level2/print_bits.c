/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 17:25:35 by alex              #+#    #+#             */
/*   Updated: 2024/12/19 18:26:54 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	get_num(int n)
{
	int result = 0;
	int counter = 1;
	while (n >= 2)
	{
		result = (n % 2) + '0';
		n = n / 2;
		counter++;
	}
	return (counter);
}

void	get_num2(int n)
{
	int result = 1;
	if (n >= 2)
	{
		get_num2(n / 2);
	}
	result = (n % 2) + '0';
	write(1, &result, 1);
}

void	print_nulls(int len)
{
	int q_nulls = 8 - len;
	int i = 0;
	while (i < q_nulls)
	{
		write(1, "0", 1);
		i++;
	}
}

void	print_bits(unsigned char octet)
{
	int	result = 0;
	if (octet == '0')
	{
		write(1, "00000000", 8);
		return ;
	}
	if (octet == '1')
	{
		write(1, "00000001", 8);
		return ;
	}
	int n = octet - '0';
	int len = get_num(n);
	print_nulls(len);
	get_num2(n);
}

int main()
{
	print_bits('2');
}
/* 
0 0
1 1
10 2
11 3
100 4
101 5
110 6
111 7
1000 8
1001 9

*/