/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 18:11:58 by alex              #+#    #+#             */
/*   Updated: 2024/12/19 18:42:15 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int i = 0;
	unsigned char res = 0;

	while (i < 8)
	{
		res = res * 2 + (octet % 2);
		octet = octet / 2;
		i++;
	}
	return (res);
}

int main()
{
	char ch = 'b';
	(printf("%c\n", reverse_bits(ch)));
}