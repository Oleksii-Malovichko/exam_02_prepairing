/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 15:00:05 by alex              #+#    #+#             */
/*   Updated: 2025/01/06 19:09:17 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i = 0;
	while (s[i] != '\0')
	{
		int	found = 0;
		size_t j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break ;
			}
			j++;
		}
		if (found == 0)
			return (i);
		i++;
	}
	return (i);
}

int main()
{
	const char *str1 = "12a345a";
    const char *str2 = "ф123456";

    size_t result = strspn(str1, str2);
    printf("Initial numeric segment length: %zu\n", result);
	size_t result2 = ft_strspn(str1, str2);
    printf("Initial numeric segment length: %zu\n", result2);
    return 0;
}