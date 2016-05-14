/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmojela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 17:16:37 by gmojela           #+#    #+#             */
/*   Updated: 2016/05/14 10:59:45 by gmojela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *num)
{
	unsigned int	conv;
	int				sign;
	int				count;

	conv = 0;
	count = 0;
	sign = 1;
	if (num[count] == '-')
	{
		sign = -1;
		count++;
	}
	if (num[count] == ' ' || num[count] == '\t' || num[count] == '\n')
		count++;
	while (num[count] != '\0')
	{
		if (num[count] >= '0' && num[count] <= '9')
		{
			conv = num[count] - '0' + conv * 10;
			count++;
		}
	}
	return (conv * sign);
}
