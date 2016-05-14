/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmojela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 16:03:15 by gmojela           #+#    #+#             */
/*   Updated: 2016/05/14 12:22:55 by gmojela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		count;
	int		str_size;
	char	*str_copy;

	count = 0;
	str_size = 0;
	while (s1[str_size] != '\0')
	{
		str_size++;
	}
	str_copy = (char*)malloc(sizeof(s1) * str_size + 1);
	while (count < str_size)
	{
		str_copy[count] = s1[count];
		count++;
	}
	str_copy[count] = '\0';
	return (str_copy);
}
