/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 17:06:31 by alex              #+#    #+#             */
/*   Updated: 2025/01/06 17:31:14 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int	    is_power_of_2(unsigned int n)
{
	// if (n == 0)
	// 	return (0);
	// return ((n & (n - 1)) == 0);
	if (n == 0)
		return 0;
	while (n % 2 == 0)
		n /= 2;
	return (n == 1);
}

int main()
{
	printf("%d\n", is_power_of_2(8));
	// printf("%d\n", INT_MAX);
}
