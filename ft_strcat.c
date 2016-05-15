/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmojela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/12 10:05:37 by gmojela           #+#    #+#             */
/*   Updated: 2016/05/15 14:23:20 by gmojela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int var;
	int count_dest;
	int count_src;

	count_dest = 0;
	var = ft_strlen(dest) + ft_strlen(src);
	while (dest[count_dest])
	{
		count_dest++;
	}
	count_src = 0;
	while (src[count_src])
	{
		dest[count_dest] = src[count_src];
		count_dest++;
		count_src++;
	}
	dest[count_dest] = '\0';
	return (dest);
}
