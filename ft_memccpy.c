/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmojela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 14:16:41 by gmojela           #+#    #+#             */
/*   Updated: 2016/05/15 14:16:53 by gmojela          ###   ########.fr       */
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
