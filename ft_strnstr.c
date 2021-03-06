/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmojela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 14:46:07 by gmojela           #+#    #+#             */
/*   Updated: 2016/05/15 14:46:09 by gmojela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strnstr(char const *s1, char const *s2, size_t n)
{
	unsigned int		i;
	unsigned int		j;
	unsigned int		length;

	if (*s2 == '\0')
		return ((char *)s1);
	i = 0;
	length = ft_strlen((char *)(s2));
	while (s1[i] && i + length - 1 < n)
	{
		if (s1[i] == *s2)
		{
			j = 0;
			while (s1[i + j] == s2[j] && (i + j) < n)
			{
				if (s2[j + 1] == '\0' || (i + j) == n - 1)
					return ((char *)s1 + i);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
