/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljafta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 16:54:23 by ljafta            #+#    #+#             */
/*   Updated: 2016/05/13 18:20:12 by ljafta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*s1;
	const char	*s2;

	s1 = (char *)dst;
	s2 = (char *)src;
	while (n-- != 0)
	{
		if (*s2 == c)
		{
			*s1++ = *s2++;
			*s1++ = '\0';
			return (dst);
		}
		*s1++ = *s2++;
	}
	return (NULL);
}
