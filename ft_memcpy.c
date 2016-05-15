/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmojela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/12 17:48:52 by gmojela           #+#    #+#             */
/*   Updated: 2016/05/15 14:17:41 by gmojela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	char		*str1;
	const char	*str2;
	size_t		count;

	count = 0;
	str1 = (char*)s1;
	str2 = (char*)s2;
	while (count < n)
	{
		str1[count] = str2[count];
		count++;
	}
	return (s1);
}
