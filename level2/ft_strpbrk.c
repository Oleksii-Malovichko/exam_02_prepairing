/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:51:30 by alex              #+#    #+#             */
/*   Updated: 2024/12/19 14:58:00 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int j;
	
	if (!s1 || !s2)
		return (NULL);
	while (*s1)
	{
		j = 0;
		while (s2[j] != '\0')
		{
			if (*s1 == s2[j])
				return (char *)(s1);
			j++;
		}
		s1++;
	}
	return (NULL);
}

int main()
{
	char *s1 = "hello, world";
	char *s2 = "mamamiah";
	if (ft_strpbrk(s1, s2))
		printf("%c\n", *ft_strpbrk(s1, s2));
	else
		printf("NULL\n");
}