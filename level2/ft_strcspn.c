/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:47:01 by alex              #+#    #+#             */
/*   Updated: 2025/01/06 17:03:47 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		j = 0;
		while (reject[j] != '\0')
		{
			if (reject[j] == s[i])
				return ((size_t)i);
			j++;
		}
		i++;
	}
	return ((size_t)i);
}

int main()
{
	char *s1 = "abcdef";
	char *s2 = "dxz";
	printf("%zd\n", ft_strcspn(s1, s2));
}