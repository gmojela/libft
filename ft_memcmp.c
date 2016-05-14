/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljafta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 17:40:38 by ljafta            #+#    #+#             */
/*   Updated: 2016/05/13 17:40:49 by ljafta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*tmp1;
	const unsigned char		*tmp2;

	tmp1 = (const unsigned char *)s1;
	tmp2 = (const unsigned char *)s2;
	if (!tmp1 || !tmp2)
		return (0);
	while (n--)
	{
		if (*tmp1 != *tmp2)
			return ((unsigned char)*tmp1 - (unsigned char)*tmp2);
		tmp1++;
		tmp2++;
	}
	return (0);
}
