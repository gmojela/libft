/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmojela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 17:01:53 by gmojela           #+#    #+#             */
/*   Updated: 2016/05/13 17:49:21 by gmojela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strstr(const char *big, const char *little)
{
	int count_little;
	int count_big;

	count_little = 1;
	count_big = 1;
	while (count_big >= (big - little) + 1)
	{
		while (big[count_big + count_little - 1] == little[count_little])
		{
			count_little++;
			if (count_little > ft_strlen(little))
			   return ((char *)little);
		}
	count_little = 1;
	count_big++;
	}
	return(NULL);
}



