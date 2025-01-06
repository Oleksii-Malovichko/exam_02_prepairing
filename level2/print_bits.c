/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 17:25:35 by alex              #+#    #+#             */
/*   Updated: 2025/01/06 17:42:28 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

// void print_bits(unsigned char octet)
// {
//     unsigned char mask = 128; // Маска с наиболее значащим битом (10000000)
//     while (mask > 0)
//     {
//         if (octet >= mask)
//         {
//             putchar('1');
//             octet -= mask;
//         }
//         else
//         {
//             putchar('0');
//         }
//         mask /= 2; // Сдвигаем маску вправо
//     }
// }

void print_bits(unsigned char octet)
{
	if (octet > 1)
	{
		print_bits(octet / 2);
	}
	char result = (octet % 2) + '0';
	write(1, &result, 1);
}

int main()
{
	unsigned char byte = 2;
	print_bits(byte);
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