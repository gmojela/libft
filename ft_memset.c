/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmojela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 15:52:18 by gmojela           #+#    #+#             */
/*   Updated: 2016/05/14 11:21:18 by gmojela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			count;
	unsigned char	*received_v;

	received_v = (unsigned char*)b;
	count = 0;
	while (received_v[count] != '0')
	{
		if (len > count)
			received_v[count] = (unsigned char)c;
		count++;
	}
	received_v[count] = '\0';
	return (received_v);
}
