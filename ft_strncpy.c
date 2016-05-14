/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmojela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 10:54:40 by gmojela           #+#    #+#             */
/*   Updated: 2016/05/13 11:42:37 by gmojela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *s1, const char *s2, int n)
{
	int count;

	count = 0;
	while (n > count)
	{
		s1[count] = s2[count];
		count++;
	}
	s1[count] = '\0';
	return (s1);
}
