/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:47:01 by alex              #+#    #+#             */
/*   Updated: 2024/12/19 14:49:49 by alex             ###   ########.fr       */
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
	char *s1 = "hello, world";
	char *s2 = "mamalhmia";
	printf("%zd\n", ft_strcspn(s1, s2));
}