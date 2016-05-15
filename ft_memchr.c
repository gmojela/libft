/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmojela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 14:50:38 by gmojela           #+#    #+#             */
/*   Updated: 2016/05/15 14:50:43 by gmojela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	i;

	if (s != NULL && n != 0)
	{
		ptr = (unsigned char*)s;
		i = 0;
		while (i < n)
		{
			if ((unsigned char)c == ptr[i])
				return ((void*)(ptr + i));
			i++;
		}
	}
	return (NULL);
}
